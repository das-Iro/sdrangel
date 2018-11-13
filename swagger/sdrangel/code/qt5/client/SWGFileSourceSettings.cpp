/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.3.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGFileSourceSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFileSourceSettings::SWGFileSourceSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFileSourceSettings::SWGFileSourceSettings() {
    file_name = nullptr;
    m_file_name_isSet = false;
    acceleration_factor = 0;
    m_acceleration_factor_isSet = false;
    loop = 0;
    m_loop_isSet = false;
}

SWGFileSourceSettings::~SWGFileSourceSettings() {
    this->cleanup();
}

void
SWGFileSourceSettings::init() {
    file_name = new QString("");
    m_file_name_isSet = false;
    acceleration_factor = 0;
    m_acceleration_factor_isSet = false;
    loop = 0;
    m_loop_isSet = false;
}

void
SWGFileSourceSettings::cleanup() {
    if(file_name != nullptr) { 
        delete file_name;
    }


}

SWGFileSourceSettings*
SWGFileSourceSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFileSourceSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&file_name, pJson["fileName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&acceleration_factor, pJson["accelerationFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&loop, pJson["loop"], "qint32", "");
    
}

QString
SWGFileSourceSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFileSourceSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(file_name != nullptr && *file_name != QString("")){
        toJsonValue(QString("fileName"), file_name, obj, QString("QString"));
    }
    if(m_acceleration_factor_isSet){
        obj->insert("accelerationFactor", QJsonValue(acceleration_factor));
    }
    if(m_loop_isSet){
        obj->insert("loop", QJsonValue(loop));
    }

    return obj;
}

QString*
SWGFileSourceSettings::getFileName() {
    return file_name;
}
void
SWGFileSourceSettings::setFileName(QString* file_name) {
    this->file_name = file_name;
    this->m_file_name_isSet = true;
}

qint32
SWGFileSourceSettings::getAccelerationFactor() {
    return acceleration_factor;
}
void
SWGFileSourceSettings::setAccelerationFactor(qint32 acceleration_factor) {
    this->acceleration_factor = acceleration_factor;
    this->m_acceleration_factor_isSet = true;
}

qint32
SWGFileSourceSettings::getLoop() {
    return loop;
}
void
SWGFileSourceSettings::setLoop(qint32 loop) {
    this->loop = loop;
    this->m_loop_isSet = true;
}


bool
SWGFileSourceSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(file_name != nullptr && *file_name != QString("")){ isObjectUpdated = true; break;}
        if(m_acceleration_factor_isSet){ isObjectUpdated = true; break;}
        if(m_loop_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

