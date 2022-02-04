/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGMapItem_2.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGMapItem_2::SWGMapItem_2(QString* json) {
    init();
    this->fromJson(*json);
}

SWGMapItem_2::SWGMapItem_2() {
    name = nullptr;
    m_name_isSet = false;
    image = nullptr;
    m_image_isSet = false;
    image_rotation = 0;
    m_image_rotation_isSet = false;
    text = nullptr;
    m_text_isSet = false;
    latitude = 0.0f;
    m_latitude_isSet = false;
    longitude = 0.0f;
    m_longitude_isSet = false;
    altitude = 0.0f;
    m_altitude_isSet = false;
    fixed_position = 0;
    m_fixed_position_isSet = false;
    position_date_time = nullptr;
    m_position_date_time_isSet = false;
    track = nullptr;
    m_track_isSet = false;
    predicted_track = nullptr;
    m_predicted_track_isSet = false;
    model = nullptr;
    m_model_isSet = false;
    orientation = 0;
    m_orientation_isSet = false;
    heading = 0.0f;
    m_heading_isSet = false;
    pitch = 0.0f;
    m_pitch_isSet = false;
    roll = 0.0f;
    m_roll_isSet = false;
    orientation_date_time = nullptr;
    m_orientation_date_time_isSet = false;
    label = nullptr;
    m_label_isSet = false;
    label_altitude_offset = 0.0f;
    m_label_altitude_offset_isSet = false;
    model_altitude_offset = 0.0f;
    m_model_altitude_offset_isSet = false;
    altitude_reference = 0;
    m_altitude_reference_isSet = false;
    animations = nullptr;
    m_animations_isSet = false;
    type = 0;
    m_type_isSet = false;
    image_tile_west = 0.0f;
    m_image_tile_west_isSet = false;
    image_tile_south = 0.0f;
    m_image_tile_south_isSet = false;
    image_tile_east = 0.0f;
    m_image_tile_east_isSet = false;
    image_tile_north = 0.0f;
    m_image_tile_north_isSet = false;
}

SWGMapItem_2::~SWGMapItem_2() {
    this->cleanup();
}

void
SWGMapItem_2::init() {
    name = new QString("");
    m_name_isSet = false;
    image = new QString("");
    m_image_isSet = false;
    image_rotation = 0;
    m_image_rotation_isSet = false;
    text = new QString("");
    m_text_isSet = false;
    latitude = 0.0f;
    m_latitude_isSet = false;
    longitude = 0.0f;
    m_longitude_isSet = false;
    altitude = 0.0f;
    m_altitude_isSet = false;
    fixed_position = 0;
    m_fixed_position_isSet = false;
    position_date_time = new QString("");
    m_position_date_time_isSet = false;
    track = new QList<SWGMapCoordinate*>();
    m_track_isSet = false;
    predicted_track = new QList<SWGMapCoordinate*>();
    m_predicted_track_isSet = false;
    model = new QString("");
    m_model_isSet = false;
    orientation = 0;
    m_orientation_isSet = false;
    heading = 0.0f;
    m_heading_isSet = false;
    pitch = 0.0f;
    m_pitch_isSet = false;
    roll = 0.0f;
    m_roll_isSet = false;
    orientation_date_time = new QString("");
    m_orientation_date_time_isSet = false;
    label = new QString("");
    m_label_isSet = false;
    label_altitude_offset = 0.0f;
    m_label_altitude_offset_isSet = false;
    model_altitude_offset = 0.0f;
    m_model_altitude_offset_isSet = false;
    altitude_reference = 0;
    m_altitude_reference_isSet = false;
    animations = new QList<SWGMapAnimation*>();
    m_animations_isSet = false;
    type = 0;
    m_type_isSet = false;
    image_tile_west = 0.0f;
    m_image_tile_west_isSet = false;
    image_tile_south = 0.0f;
    m_image_tile_south_isSet = false;
    image_tile_east = 0.0f;
    m_image_tile_east_isSet = false;
    image_tile_north = 0.0f;
    m_image_tile_north_isSet = false;
}

void
SWGMapItem_2::cleanup() {
    if(name != nullptr) { 
        delete name;
    }
    if(image != nullptr) { 
        delete image;
    }

    if(text != nullptr) { 
        delete text;
    }




    if(position_date_time != nullptr) { 
        delete position_date_time;
    }
    if(track != nullptr) { 
        auto arr = track;
        for(auto o: *arr) { 
            delete o;
        }
        delete track;
    }
    if(predicted_track != nullptr) { 
        auto arr = predicted_track;
        for(auto o: *arr) { 
            delete o;
        }
        delete predicted_track;
    }
    if(model != nullptr) { 
        delete model;
    }




    if(orientation_date_time != nullptr) { 
        delete orientation_date_time;
    }
    if(label != nullptr) { 
        delete label;
    }



    if(animations != nullptr) { 
        auto arr = animations;
        for(auto o: *arr) { 
            delete o;
        }
        delete animations;
    }





}

SWGMapItem_2*
SWGMapItem_2::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGMapItem_2::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&image, pJson["image"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&image_rotation, pJson["imageRotation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&text, pJson["text"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&latitude, pJson["latitude"], "float", "");
    
    ::SWGSDRangel::setValue(&longitude, pJson["longitude"], "float", "");
    
    ::SWGSDRangel::setValue(&altitude, pJson["altitude"], "float", "");
    
    ::SWGSDRangel::setValue(&fixed_position, pJson["fixedPosition"], "qint32", "");
    
    ::SWGSDRangel::setValue(&position_date_time, pJson["positionDateTime"], "QString", "QString");
    
    
    ::SWGSDRangel::setValue(&track, pJson["track"], "QList", "SWGMapCoordinate");
    
    ::SWGSDRangel::setValue(&predicted_track, pJson["predictedTrack"], "QList", "SWGMapCoordinate");
    ::SWGSDRangel::setValue(&model, pJson["model"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&orientation, pJson["orientation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&heading, pJson["heading"], "float", "");
    
    ::SWGSDRangel::setValue(&pitch, pJson["pitch"], "float", "");
    
    ::SWGSDRangel::setValue(&roll, pJson["roll"], "float", "");
    
    ::SWGSDRangel::setValue(&orientation_date_time, pJson["orientationDateTime"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&label, pJson["label"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&label_altitude_offset, pJson["labelAltitudeOffset"], "float", "");
    
    ::SWGSDRangel::setValue(&model_altitude_offset, pJson["modelAltitudeOffset"], "float", "");
    
    ::SWGSDRangel::setValue(&altitude_reference, pJson["altitudeReference"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&animations, pJson["animations"], "QList", "SWGMapAnimation");
    ::SWGSDRangel::setValue(&type, pJson["type"], "qint32", "");
    
    ::SWGSDRangel::setValue(&image_tile_west, pJson["imageTileWest"], "float", "");
    
    ::SWGSDRangel::setValue(&image_tile_south, pJson["imageTileSouth"], "float", "");
    
    ::SWGSDRangel::setValue(&image_tile_east, pJson["imageTileEast"], "float", "");
    
    ::SWGSDRangel::setValue(&image_tile_north, pJson["imageTileNorth"], "float", "");
    
}

QString
SWGMapItem_2::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGMapItem_2::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(image != nullptr && *image != QString("")){
        toJsonValue(QString("image"), image, obj, QString("QString"));
    }
    if(m_image_rotation_isSet){
        obj->insert("imageRotation", QJsonValue(image_rotation));
    }
    if(text != nullptr && *text != QString("")){
        toJsonValue(QString("text"), text, obj, QString("QString"));
    }
    if(m_latitude_isSet){
        obj->insert("latitude", QJsonValue(latitude));
    }
    if(m_longitude_isSet){
        obj->insert("longitude", QJsonValue(longitude));
    }
    if(m_altitude_isSet){
        obj->insert("altitude", QJsonValue(altitude));
    }
    if(m_fixed_position_isSet){
        obj->insert("fixedPosition", QJsonValue(fixed_position));
    }
    if(position_date_time != nullptr && *position_date_time != QString("")){
        toJsonValue(QString("positionDateTime"), position_date_time, obj, QString("QString"));
    }
    if(track && track->size() > 0){
        toJsonArray((QList<void*>*)track, obj, "track", "SWGMapCoordinate");
    }
    if(predicted_track && predicted_track->size() > 0){
        toJsonArray((QList<void*>*)predicted_track, obj, "predictedTrack", "SWGMapCoordinate");
    }
    if(model != nullptr && *model != QString("")){
        toJsonValue(QString("model"), model, obj, QString("QString"));
    }
    if(m_orientation_isSet){
        obj->insert("orientation", QJsonValue(orientation));
    }
    if(m_heading_isSet){
        obj->insert("heading", QJsonValue(heading));
    }
    if(m_pitch_isSet){
        obj->insert("pitch", QJsonValue(pitch));
    }
    if(m_roll_isSet){
        obj->insert("roll", QJsonValue(roll));
    }
    if(orientation_date_time != nullptr && *orientation_date_time != QString("")){
        toJsonValue(QString("orientationDateTime"), orientation_date_time, obj, QString("QString"));
    }
    if(label != nullptr && *label != QString("")){
        toJsonValue(QString("label"), label, obj, QString("QString"));
    }
    if(m_label_altitude_offset_isSet){
        obj->insert("labelAltitudeOffset", QJsonValue(label_altitude_offset));
    }
    if(m_model_altitude_offset_isSet){
        obj->insert("modelAltitudeOffset", QJsonValue(model_altitude_offset));
    }
    if(m_altitude_reference_isSet){
        obj->insert("altitudeReference", QJsonValue(altitude_reference));
    }
    if(animations && animations->size() > 0){
        toJsonArray((QList<void*>*)animations, obj, "animations", "SWGMapAnimation");
    }
    if(m_type_isSet){
        obj->insert("type", QJsonValue(type));
    }
    if(m_image_tile_west_isSet){
        obj->insert("imageTileWest", QJsonValue(image_tile_west));
    }
    if(m_image_tile_south_isSet){
        obj->insert("imageTileSouth", QJsonValue(image_tile_south));
    }
    if(m_image_tile_east_isSet){
        obj->insert("imageTileEast", QJsonValue(image_tile_east));
    }
    if(m_image_tile_north_isSet){
        obj->insert("imageTileNorth", QJsonValue(image_tile_north));
    }

    return obj;
}

QString*
SWGMapItem_2::getName() {
    return name;
}
void
SWGMapItem_2::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
SWGMapItem_2::getImage() {
    return image;
}
void
SWGMapItem_2::setImage(QString* image) {
    this->image = image;
    this->m_image_isSet = true;
}

qint32
SWGMapItem_2::getImageRotation() {
    return image_rotation;
}
void
SWGMapItem_2::setImageRotation(qint32 image_rotation) {
    this->image_rotation = image_rotation;
    this->m_image_rotation_isSet = true;
}

QString*
SWGMapItem_2::getText() {
    return text;
}
void
SWGMapItem_2::setText(QString* text) {
    this->text = text;
    this->m_text_isSet = true;
}

float
SWGMapItem_2::getLatitude() {
    return latitude;
}
void
SWGMapItem_2::setLatitude(float latitude) {
    this->latitude = latitude;
    this->m_latitude_isSet = true;
}

float
SWGMapItem_2::getLongitude() {
    return longitude;
}
void
SWGMapItem_2::setLongitude(float longitude) {
    this->longitude = longitude;
    this->m_longitude_isSet = true;
}

float
SWGMapItem_2::getAltitude() {
    return altitude;
}
void
SWGMapItem_2::setAltitude(float altitude) {
    this->altitude = altitude;
    this->m_altitude_isSet = true;
}

qint32
SWGMapItem_2::getFixedPosition() {
    return fixed_position;
}
void
SWGMapItem_2::setFixedPosition(qint32 fixed_position) {
    this->fixed_position = fixed_position;
    this->m_fixed_position_isSet = true;
}

QString*
SWGMapItem_2::getPositionDateTime() {
    return position_date_time;
}
void
SWGMapItem_2::setPositionDateTime(QString* position_date_time) {
    this->position_date_time = position_date_time;
    this->m_position_date_time_isSet = true;
}

QList<SWGMapCoordinate*>*
SWGMapItem_2::getTrack() {
    return track;
}
void
SWGMapItem_2::setTrack(QList<SWGMapCoordinate*>* track) {
    this->track = track;
    this->m_track_isSet = true;
}

QList<SWGMapCoordinate*>*
SWGMapItem_2::getPredictedTrack() {
    return predicted_track;
}
void
SWGMapItem_2::setPredictedTrack(QList<SWGMapCoordinate*>* predicted_track) {
    this->predicted_track = predicted_track;
    this->m_predicted_track_isSet = true;
}

QString*
SWGMapItem_2::getModel() {
    return model;
}
void
SWGMapItem_2::setModel(QString* model) {
    this->model = model;
    this->m_model_isSet = true;
}

qint32
SWGMapItem_2::getOrientation() {
    return orientation;
}
void
SWGMapItem_2::setOrientation(qint32 orientation) {
    this->orientation = orientation;
    this->m_orientation_isSet = true;
}

float
SWGMapItem_2::getHeading() {
    return heading;
}
void
SWGMapItem_2::setHeading(float heading) {
    this->heading = heading;
    this->m_heading_isSet = true;
}

float
SWGMapItem_2::getPitch() {
    return pitch;
}
void
SWGMapItem_2::setPitch(float pitch) {
    this->pitch = pitch;
    this->m_pitch_isSet = true;
}

float
SWGMapItem_2::getRoll() {
    return roll;
}
void
SWGMapItem_2::setRoll(float roll) {
    this->roll = roll;
    this->m_roll_isSet = true;
}

QString*
SWGMapItem_2::getOrientationDateTime() {
    return orientation_date_time;
}
void
SWGMapItem_2::setOrientationDateTime(QString* orientation_date_time) {
    this->orientation_date_time = orientation_date_time;
    this->m_orientation_date_time_isSet = true;
}

QString*
SWGMapItem_2::getLabel() {
    return label;
}
void
SWGMapItem_2::setLabel(QString* label) {
    this->label = label;
    this->m_label_isSet = true;
}

float
SWGMapItem_2::getLabelAltitudeOffset() {
    return label_altitude_offset;
}
void
SWGMapItem_2::setLabelAltitudeOffset(float label_altitude_offset) {
    this->label_altitude_offset = label_altitude_offset;
    this->m_label_altitude_offset_isSet = true;
}

float
SWGMapItem_2::getModelAltitudeOffset() {
    return model_altitude_offset;
}
void
SWGMapItem_2::setModelAltitudeOffset(float model_altitude_offset) {
    this->model_altitude_offset = model_altitude_offset;
    this->m_model_altitude_offset_isSet = true;
}

qint32
SWGMapItem_2::getAltitudeReference() {
    return altitude_reference;
}
void
SWGMapItem_2::setAltitudeReference(qint32 altitude_reference) {
    this->altitude_reference = altitude_reference;
    this->m_altitude_reference_isSet = true;
}

QList<SWGMapAnimation*>*
SWGMapItem_2::getAnimations() {
    return animations;
}
void
SWGMapItem_2::setAnimations(QList<SWGMapAnimation*>* animations) {
    this->animations = animations;
    this->m_animations_isSet = true;
}

qint32
SWGMapItem_2::getType() {
    return type;
}
void
SWGMapItem_2::setType(qint32 type) {
    this->type = type;
    this->m_type_isSet = true;
}

float
SWGMapItem_2::getImageTileWest() {
    return image_tile_west;
}
void
SWGMapItem_2::setImageTileWest(float image_tile_west) {
    this->image_tile_west = image_tile_west;
    this->m_image_tile_west_isSet = true;
}

float
SWGMapItem_2::getImageTileSouth() {
    return image_tile_south;
}
void
SWGMapItem_2::setImageTileSouth(float image_tile_south) {
    this->image_tile_south = image_tile_south;
    this->m_image_tile_south_isSet = true;
}

float
SWGMapItem_2::getImageTileEast() {
    return image_tile_east;
}
void
SWGMapItem_2::setImageTileEast(float image_tile_east) {
    this->image_tile_east = image_tile_east;
    this->m_image_tile_east_isSet = true;
}

float
SWGMapItem_2::getImageTileNorth() {
    return image_tile_north;
}
void
SWGMapItem_2::setImageTileNorth(float image_tile_north) {
    this->image_tile_north = image_tile_north;
    this->m_image_tile_north_isSet = true;
}


bool
SWGMapItem_2::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name && *name != QString("")){
            isObjectUpdated = true; break;
        }
        if(image && *image != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_image_rotation_isSet){
            isObjectUpdated = true; break;
        }
        if(text && *text != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_latitude_isSet){
            isObjectUpdated = true; break;
        }
        if(m_longitude_isSet){
            isObjectUpdated = true; break;
        }
        if(m_altitude_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fixed_position_isSet){
            isObjectUpdated = true; break;
        }
        if(position_date_time && *position_date_time != QString("")){
            isObjectUpdated = true; break;
        }
        if(track && (track->size() > 0)){
            isObjectUpdated = true; break;
        }
        if(predicted_track && (predicted_track->size() > 0)){
            isObjectUpdated = true; break;
        }
        if(model && *model != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_orientation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_heading_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pitch_isSet){
            isObjectUpdated = true; break;
        }
        if(m_roll_isSet){
            isObjectUpdated = true; break;
        }
        if(orientation_date_time && *orientation_date_time != QString("")){
            isObjectUpdated = true; break;
        }
        if(label && *label != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_label_altitude_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_model_altitude_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_altitude_reference_isSet){
            isObjectUpdated = true; break;
        }
        if(animations && (animations->size() > 0)){
            isObjectUpdated = true; break;
        }
        if(m_type_isSet){
            isObjectUpdated = true; break;
        }
        if(m_image_tile_west_isSet){
            isObjectUpdated = true; break;
        }
        if(m_image_tile_south_isSet){
            isObjectUpdated = true; break;
        }
        if(m_image_tile_east_isSet){
            isObjectUpdated = true; break;
        }
        if(m_image_tile_north_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

