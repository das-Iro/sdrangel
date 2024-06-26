/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSIDSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSIDSettings::SWGSIDSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSIDSettings::SWGSIDSettings() {
    period = 0.0f;
    m_period_isSet = false;
    autosave = 0;
    m_autosave_isSet = false;
    autoload = 0;
    m_autoload_isSet = false;
    filename = 0;
    m_filename_isSet = false;
    autosave_period = 0;
    m_autosave_period_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_feature_set_index = 0;
    m_reverse_api_feature_set_index_isSet = false;
    reverse_api_feature_index = 0;
    m_reverse_api_feature_index_isSet = false;
    rollup_state = nullptr;
    m_rollup_state_isSet = false;
}

SWGSIDSettings::~SWGSIDSettings() {
    this->cleanup();
}

void
SWGSIDSettings::init() {
    period = 0.0f;
    m_period_isSet = false;
    autosave = 0;
    m_autosave_isSet = false;
    autoload = 0;
    m_autoload_isSet = false;
    filename = 0;
    m_filename_isSet = false;
    autosave_period = 0;
    m_autosave_period_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_feature_set_index = 0;
    m_reverse_api_feature_set_index_isSet = false;
    reverse_api_feature_index = 0;
    m_reverse_api_feature_index_isSet = false;
    rollup_state = new SWGRollupState();
    m_rollup_state_isSet = false;
}

void
SWGSIDSettings::cleanup() {





    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(rollup_state != nullptr) { 
        delete rollup_state;
    }
}

SWGSIDSettings*
SWGSIDSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSIDSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&period, pJson["period"], "float", "");
    
    ::SWGSDRangel::setValue(&autosave, pJson["autosave"], "qint32", "");
    
    ::SWGSDRangel::setValue(&autoload, pJson["autoload"], "qint32", "");
    
    ::SWGSDRangel::setValue(&filename, pJson["filename"], "qint32", "");
    
    ::SWGSDRangel::setValue(&autosave_period, pJson["autosavePeriod"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_feature_set_index, pJson["reverseAPIFeatureSetIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_feature_index, pJson["reverseAPIFeatureIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rollup_state, pJson["rollupState"], "SWGRollupState", "SWGRollupState");
    
}

QString
SWGSIDSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSIDSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_period_isSet){
        obj->insert("period", QJsonValue(period));
    }
    if(m_autosave_isSet){
        obj->insert("autosave", QJsonValue(autosave));
    }
    if(m_autoload_isSet){
        obj->insert("autoload", QJsonValue(autoload));
    }
    if(m_filename_isSet){
        obj->insert("filename", QJsonValue(filename));
    }
    if(m_autosave_period_isSet){
        obj->insert("autosavePeriod", QJsonValue(autosave_period));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_feature_set_index_isSet){
        obj->insert("reverseAPIFeatureSetIndex", QJsonValue(reverse_api_feature_set_index));
    }
    if(m_reverse_api_feature_index_isSet){
        obj->insert("reverseAPIFeatureIndex", QJsonValue(reverse_api_feature_index));
    }
    if((rollup_state != nullptr) && (rollup_state->isSet())){
        toJsonValue(QString("rollupState"), rollup_state, obj, QString("SWGRollupState"));
    }

    return obj;
}

float
SWGSIDSettings::getPeriod() {
    return period;
}
void
SWGSIDSettings::setPeriod(float period) {
    this->period = period;
    this->m_period_isSet = true;
}

qint32
SWGSIDSettings::getAutosave() {
    return autosave;
}
void
SWGSIDSettings::setAutosave(qint32 autosave) {
    this->autosave = autosave;
    this->m_autosave_isSet = true;
}

qint32
SWGSIDSettings::getAutoload() {
    return autoload;
}
void
SWGSIDSettings::setAutoload(qint32 autoload) {
    this->autoload = autoload;
    this->m_autoload_isSet = true;
}

qint32
SWGSIDSettings::getFilename() {
    return filename;
}
void
SWGSIDSettings::setFilename(qint32 filename) {
    this->filename = filename;
    this->m_filename_isSet = true;
}

qint32
SWGSIDSettings::getAutosavePeriod() {
    return autosave_period;
}
void
SWGSIDSettings::setAutosavePeriod(qint32 autosave_period) {
    this->autosave_period = autosave_period;
    this->m_autosave_period_isSet = true;
}

QString*
SWGSIDSettings::getTitle() {
    return title;
}
void
SWGSIDSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGSIDSettings::getRgbColor() {
    return rgb_color;
}
void
SWGSIDSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

qint32
SWGSIDSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGSIDSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGSIDSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGSIDSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGSIDSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGSIDSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGSIDSettings::getReverseApiFeatureSetIndex() {
    return reverse_api_feature_set_index;
}
void
SWGSIDSettings::setReverseApiFeatureSetIndex(qint32 reverse_api_feature_set_index) {
    this->reverse_api_feature_set_index = reverse_api_feature_set_index;
    this->m_reverse_api_feature_set_index_isSet = true;
}

qint32
SWGSIDSettings::getReverseApiFeatureIndex() {
    return reverse_api_feature_index;
}
void
SWGSIDSettings::setReverseApiFeatureIndex(qint32 reverse_api_feature_index) {
    this->reverse_api_feature_index = reverse_api_feature_index;
    this->m_reverse_api_feature_index_isSet = true;
}

SWGRollupState*
SWGSIDSettings::getRollupState() {
    return rollup_state;
}
void
SWGSIDSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGSIDSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_period_isSet){
            isObjectUpdated = true; break;
        }
        if(m_autosave_isSet){
            isObjectUpdated = true; break;
        }
        if(m_autoload_isSet){
            isObjectUpdated = true; break;
        }
        if(m_filename_isSet){
            isObjectUpdated = true; break;
        }
        if(m_autosave_period_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_feature_set_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_feature_index_isSet){
            isObjectUpdated = true; break;
        }
        if(rollup_state && rollup_state->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

