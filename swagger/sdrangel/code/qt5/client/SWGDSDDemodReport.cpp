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


#include "SWGDSDDemodReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDSDDemodReport::SWGDSDDemodReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDSDDemodReport::SWGDSDDemodReport() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    audio_sample_rate = 0;
    m_audio_sample_rate_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
    squelch = 0;
    m_squelch_isSet = false;
    pll_locked = 0;
    m_pll_locked_isSet = false;
    slot1_on = 0;
    m_slot1_on_isSet = false;
    slot2_on = 0;
    m_slot2_on_isSet = false;
    sync_type = nullptr;
    m_sync_type_isSet = false;
    in_level = 0;
    m_in_level_isSet = false;
    carier_position = 0;
    m_carier_position_isSet = false;
    zero_crossing_position = 0;
    m_zero_crossing_position_isSet = false;
    sync_rate = 0;
    m_sync_rate_isSet = false;
    status_text = nullptr;
    m_status_text_isSet = false;
}

SWGDSDDemodReport::~SWGDSDDemodReport() {
    this->cleanup();
}

void
SWGDSDDemodReport::init() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    audio_sample_rate = 0;
    m_audio_sample_rate_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
    squelch = 0;
    m_squelch_isSet = false;
    pll_locked = 0;
    m_pll_locked_isSet = false;
    slot1_on = 0;
    m_slot1_on_isSet = false;
    slot2_on = 0;
    m_slot2_on_isSet = false;
    sync_type = new QString("");
    m_sync_type_isSet = false;
    in_level = 0;
    m_in_level_isSet = false;
    carier_position = 0;
    m_carier_position_isSet = false;
    zero_crossing_position = 0;
    m_zero_crossing_position_isSet = false;
    sync_rate = 0;
    m_sync_rate_isSet = false;
    status_text = new QString("");
    m_status_text_isSet = false;
}

void
SWGDSDDemodReport::cleanup() {







    if(sync_type != nullptr) { 
        delete sync_type;
    }




    if(status_text != nullptr) { 
        delete status_text;
    }
}

SWGDSDDemodReport*
SWGDSDDemodReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDSDDemodReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channel_power_db, pJson["channelPowerDB"], "float", "");
    
    ::SWGSDRangel::setValue(&audio_sample_rate, pJson["audioSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_sample_rate, pJson["channelSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pll_locked, pJson["pllLocked"], "qint32", "");
    
    ::SWGSDRangel::setValue(&slot1_on, pJson["slot1On"], "qint32", "");
    
    ::SWGSDRangel::setValue(&slot2_on, pJson["slot2On"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sync_type, pJson["syncType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&in_level, pJson["inLevel"], "qint32", "");
    
    ::SWGSDRangel::setValue(&carier_position, pJson["carierPosition"], "qint32", "");
    
    ::SWGSDRangel::setValue(&zero_crossing_position, pJson["zeroCrossingPosition"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sync_rate, pJson["syncRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&status_text, pJson["statusText"], "QString", "QString");
    
}

QString
SWGDSDDemodReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDSDDemodReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_channel_power_db_isSet){
        obj->insert("channelPowerDB", QJsonValue(channel_power_db));
    }
    if(m_audio_sample_rate_isSet){
        obj->insert("audioSampleRate", QJsonValue(audio_sample_rate));
    }
    if(m_channel_sample_rate_isSet){
        obj->insert("channelSampleRate", QJsonValue(channel_sample_rate));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_pll_locked_isSet){
        obj->insert("pllLocked", QJsonValue(pll_locked));
    }
    if(m_slot1_on_isSet){
        obj->insert("slot1On", QJsonValue(slot1_on));
    }
    if(m_slot2_on_isSet){
        obj->insert("slot2On", QJsonValue(slot2_on));
    }
    if(sync_type != nullptr && *sync_type != QString("")){
        toJsonValue(QString("syncType"), sync_type, obj, QString("QString"));
    }
    if(m_in_level_isSet){
        obj->insert("inLevel", QJsonValue(in_level));
    }
    if(m_carier_position_isSet){
        obj->insert("carierPosition", QJsonValue(carier_position));
    }
    if(m_zero_crossing_position_isSet){
        obj->insert("zeroCrossingPosition", QJsonValue(zero_crossing_position));
    }
    if(m_sync_rate_isSet){
        obj->insert("syncRate", QJsonValue(sync_rate));
    }
    if(status_text != nullptr && *status_text != QString("")){
        toJsonValue(QString("statusText"), status_text, obj, QString("QString"));
    }

    return obj;
}

float
SWGDSDDemodReport::getChannelPowerDb() {
    return channel_power_db;
}
void
SWGDSDDemodReport::setChannelPowerDb(float channel_power_db) {
    this->channel_power_db = channel_power_db;
    this->m_channel_power_db_isSet = true;
}

qint32
SWGDSDDemodReport::getAudioSampleRate() {
    return audio_sample_rate;
}
void
SWGDSDDemodReport::setAudioSampleRate(qint32 audio_sample_rate) {
    this->audio_sample_rate = audio_sample_rate;
    this->m_audio_sample_rate_isSet = true;
}

qint32
SWGDSDDemodReport::getChannelSampleRate() {
    return channel_sample_rate;
}
void
SWGDSDDemodReport::setChannelSampleRate(qint32 channel_sample_rate) {
    this->channel_sample_rate = channel_sample_rate;
    this->m_channel_sample_rate_isSet = true;
}

qint32
SWGDSDDemodReport::getSquelch() {
    return squelch;
}
void
SWGDSDDemodReport::setSquelch(qint32 squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

qint32
SWGDSDDemodReport::getPllLocked() {
    return pll_locked;
}
void
SWGDSDDemodReport::setPllLocked(qint32 pll_locked) {
    this->pll_locked = pll_locked;
    this->m_pll_locked_isSet = true;
}

qint32
SWGDSDDemodReport::getSlot1On() {
    return slot1_on;
}
void
SWGDSDDemodReport::setSlot1On(qint32 slot1_on) {
    this->slot1_on = slot1_on;
    this->m_slot1_on_isSet = true;
}

qint32
SWGDSDDemodReport::getSlot2On() {
    return slot2_on;
}
void
SWGDSDDemodReport::setSlot2On(qint32 slot2_on) {
    this->slot2_on = slot2_on;
    this->m_slot2_on_isSet = true;
}

QString*
SWGDSDDemodReport::getSyncType() {
    return sync_type;
}
void
SWGDSDDemodReport::setSyncType(QString* sync_type) {
    this->sync_type = sync_type;
    this->m_sync_type_isSet = true;
}

qint32
SWGDSDDemodReport::getInLevel() {
    return in_level;
}
void
SWGDSDDemodReport::setInLevel(qint32 in_level) {
    this->in_level = in_level;
    this->m_in_level_isSet = true;
}

qint32
SWGDSDDemodReport::getCarierPosition() {
    return carier_position;
}
void
SWGDSDDemodReport::setCarierPosition(qint32 carier_position) {
    this->carier_position = carier_position;
    this->m_carier_position_isSet = true;
}

qint32
SWGDSDDemodReport::getZeroCrossingPosition() {
    return zero_crossing_position;
}
void
SWGDSDDemodReport::setZeroCrossingPosition(qint32 zero_crossing_position) {
    this->zero_crossing_position = zero_crossing_position;
    this->m_zero_crossing_position_isSet = true;
}

qint32
SWGDSDDemodReport::getSyncRate() {
    return sync_rate;
}
void
SWGDSDDemodReport::setSyncRate(qint32 sync_rate) {
    this->sync_rate = sync_rate;
    this->m_sync_rate_isSet = true;
}

QString*
SWGDSDDemodReport::getStatusText() {
    return status_text;
}
void
SWGDSDDemodReport::setStatusText(QString* status_text) {
    this->status_text = status_text;
    this->m_status_text_isSet = true;
}


bool
SWGDSDDemodReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_channel_power_db_isSet){ isObjectUpdated = true; break;}
        if(m_audio_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_channel_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_isSet){ isObjectUpdated = true; break;}
        if(m_pll_locked_isSet){ isObjectUpdated = true; break;}
        if(m_slot1_on_isSet){ isObjectUpdated = true; break;}
        if(m_slot2_on_isSet){ isObjectUpdated = true; break;}
        if(sync_type != nullptr && *sync_type != QString("")){ isObjectUpdated = true; break;}
        if(m_in_level_isSet){ isObjectUpdated = true; break;}
        if(m_carier_position_isSet){ isObjectUpdated = true; break;}
        if(m_zero_crossing_position_isSet){ isObjectUpdated = true; break;}
        if(m_sync_rate_isSet){ isObjectUpdated = true; break;}
        if(status_text != nullptr && *status_text != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

