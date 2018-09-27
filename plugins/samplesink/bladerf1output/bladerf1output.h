///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDE_BLADERFOUTPUT_H
#define INCLUDE_BLADERFOUTPUT_H

#include <dsp/devicesamplesink.h>
#include <libbladeRF.h>
#include <QString>

#include "../../../devices/bladerf1/devicebladerf1.h"
#include "../../../devices/bladerf1/devicebladerf1param.h"
#include "bladerf1outputsettings.h"

class DeviceSinkAPI;
class Bladerf1OutputThread;

class Bladerf1Output : public DeviceSampleSink {
public:
	class MsgConfigureBladerf1 : public Message {
		MESSAGE_CLASS_DECLARATION

	public:
		const BladeRF1OutputSettings& getSettings() const { return m_settings; }
		bool getForce() const { return m_force; }

		static MsgConfigureBladerf1* create(const BladeRF1OutputSettings& settings, bool force)
		{
			return new MsgConfigureBladerf1(settings, force);
		}

	private:
		BladeRF1OutputSettings m_settings;
		bool m_force;

		MsgConfigureBladerf1(const BladeRF1OutputSettings& settings, bool force) :
			Message(),
			m_settings(settings),
			m_force(force)
		{ }
	};

    class MsgStartStop : public Message {
        MESSAGE_CLASS_DECLARATION

    public:
        bool getStartStop() const { return m_startStop; }

        static MsgStartStop* create(bool startStop) {
            return new MsgStartStop(startStop);
        }

    protected:
        bool m_startStop;

        MsgStartStop(bool startStop) :
            Message(),
            m_startStop(startStop)
        { }
    };

	class MsgReportBladerf1 : public Message {
		MESSAGE_CLASS_DECLARATION

	public:

		static MsgReportBladerf1* create()
		{
			return new MsgReportBladerf1();
		}

	protected:

		MsgReportBladerf1() :
			Message()
		{ }
	};

	Bladerf1Output(DeviceSinkAPI *deviceAPI);
	virtual ~Bladerf1Output();
	virtual void destroy();

    virtual void init();
	virtual bool start();
	virtual void stop();

    virtual QByteArray serialize() const;
    virtual bool deserialize(const QByteArray& data);

    virtual void setMessageQueueToGUI(MessageQueue *queue) { m_guiMessageQueue = queue; }
	virtual const QString& getDeviceDescription() const;
	virtual int getSampleRate() const;
	virtual quint64 getCenterFrequency() const;
    virtual void setCenterFrequency(qint64 centerFrequency);

	virtual bool handleMessage(const Message& message);

    virtual int webapiSettingsGet(
                SWGSDRangel::SWGDeviceSettings& response,
                QString& errorMessage);

    virtual int webapiSettingsPutPatch(
                bool force,
                const QStringList& deviceSettingsKeys,
                SWGSDRangel::SWGDeviceSettings& response, // query + response
                QString& errorMessage);

    virtual int webapiRunGet(
            SWGSDRangel::SWGDeviceState& response,
            QString& errorMessage);

    virtual int webapiRun(
            bool run,
            SWGSDRangel::SWGDeviceState& response,
            QString& errorMessage);

private:
    bool openDevice();
    void closeDevice();
	bool applySettings(const BladeRF1OutputSettings& settings, bool force);
    void webapiFormatDeviceSettings(SWGSDRangel::SWGDeviceSettings& response, const BladeRF1OutputSettings& settings);

	DeviceSinkAPI *m_deviceAPI;
	QMutex m_mutex;
	BladeRF1OutputSettings m_settings;
	struct bladerf* m_dev;
	Bladerf1OutputThread* m_bladerfThread;
	QString m_deviceDescription;
    DeviceBladeRF1Params m_sharedParams;
    bool m_running;
};

#endif // INCLUDE_BLADERFOUTPUT_H