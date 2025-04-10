#pragma once
// MESSAGE BATTERY_SENSOR_INFO PACKING

#define MAVLINK_MSG_ID_BATTERY_SENSOR_INFO 50015


typedef struct __mavlink_battery_sensor_info_t {
 uint64_t timestamp; /*<  time since system start (microseconds)*/
 float string_current; /*<  bms current*/
 float string_voltage; /*<  bms voltage*/
 float string_soc; /*<  bms  soc*/
 uint32_t alarm_code; /*<  bms error code*/
 uint8_t battery_state; /*<  1- charge ,2-discharge*/
} mavlink_battery_sensor_info_t;

#define MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN 25
#define MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN 25
#define MAVLINK_MSG_ID_50015_LEN 25
#define MAVLINK_MSG_ID_50015_MIN_LEN 25

#define MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC 105
#define MAVLINK_MSG_ID_50015_CRC 105



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BATTERY_SENSOR_INFO { \
    50015, \
    "BATTERY_SENSOR_INFO", \
    6, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_battery_sensor_info_t, timestamp) }, \
         { "string_current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_battery_sensor_info_t, string_current) }, \
         { "string_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_battery_sensor_info_t, string_voltage) }, \
         { "string_soc", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_battery_sensor_info_t, string_soc) }, \
         { "alarm_code", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_battery_sensor_info_t, alarm_code) }, \
         { "battery_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_battery_sensor_info_t, battery_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BATTERY_SENSOR_INFO { \
    "BATTERY_SENSOR_INFO", \
    6, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_battery_sensor_info_t, timestamp) }, \
         { "string_current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_battery_sensor_info_t, string_current) }, \
         { "string_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_battery_sensor_info_t, string_voltage) }, \
         { "string_soc", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_battery_sensor_info_t, string_soc) }, \
         { "alarm_code", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_battery_sensor_info_t, alarm_code) }, \
         { "battery_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_battery_sensor_info_t, battery_state) }, \
         } \
}
#endif

/**
 * @brief Pack a battery_sensor_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param string_current  bms current
 * @param string_voltage  bms voltage
 * @param string_soc  bms  soc
 * @param alarm_code  bms error code
 * @param battery_state  1- charge ,2-discharge
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_sensor_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float string_current, float string_voltage, float string_soc, uint32_t alarm_code, uint8_t battery_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, string_current);
    _mav_put_float(buf, 12, string_voltage);
    _mav_put_float(buf, 16, string_soc);
    _mav_put_uint32_t(buf, 20, alarm_code);
    _mav_put_uint8_t(buf, 24, battery_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
#else
    mavlink_battery_sensor_info_t packet;
    packet.timestamp = timestamp;
    packet.string_current = string_current;
    packet.string_voltage = string_voltage;
    packet.string_soc = string_soc;
    packet.alarm_code = alarm_code;
    packet.battery_state = battery_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_SENSOR_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
}

/**
 * @brief Pack a battery_sensor_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param string_current  bms current
 * @param string_voltage  bms voltage
 * @param string_soc  bms  soc
 * @param alarm_code  bms error code
 * @param battery_state  1- charge ,2-discharge
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_sensor_info_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, float string_current, float string_voltage, float string_soc, uint32_t alarm_code, uint8_t battery_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, string_current);
    _mav_put_float(buf, 12, string_voltage);
    _mav_put_float(buf, 16, string_soc);
    _mav_put_uint32_t(buf, 20, alarm_code);
    _mav_put_uint8_t(buf, 24, battery_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
#else
    mavlink_battery_sensor_info_t packet;
    packet.timestamp = timestamp;
    packet.string_current = string_current;
    packet.string_voltage = string_voltage;
    packet.string_soc = string_soc;
    packet.alarm_code = alarm_code;
    packet.battery_state = battery_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_SENSOR_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
#endif
}

/**
 * @brief Pack a battery_sensor_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  time since system start (microseconds)
 * @param string_current  bms current
 * @param string_voltage  bms voltage
 * @param string_soc  bms  soc
 * @param alarm_code  bms error code
 * @param battery_state  1- charge ,2-discharge
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_sensor_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float string_current,float string_voltage,float string_soc,uint32_t alarm_code,uint8_t battery_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, string_current);
    _mav_put_float(buf, 12, string_voltage);
    _mav_put_float(buf, 16, string_soc);
    _mav_put_uint32_t(buf, 20, alarm_code);
    _mav_put_uint8_t(buf, 24, battery_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
#else
    mavlink_battery_sensor_info_t packet;
    packet.timestamp = timestamp;
    packet.string_current = string_current;
    packet.string_voltage = string_voltage;
    packet.string_soc = string_soc;
    packet.alarm_code = alarm_code;
    packet.battery_state = battery_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_SENSOR_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
}

/**
 * @brief Encode a battery_sensor_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param battery_sensor_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_sensor_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_battery_sensor_info_t* battery_sensor_info)
{
    return mavlink_msg_battery_sensor_info_pack(system_id, component_id, msg, battery_sensor_info->timestamp, battery_sensor_info->string_current, battery_sensor_info->string_voltage, battery_sensor_info->string_soc, battery_sensor_info->alarm_code, battery_sensor_info->battery_state);
}

/**
 * @brief Encode a battery_sensor_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_sensor_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_sensor_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_battery_sensor_info_t* battery_sensor_info)
{
    return mavlink_msg_battery_sensor_info_pack_chan(system_id, component_id, chan, msg, battery_sensor_info->timestamp, battery_sensor_info->string_current, battery_sensor_info->string_voltage, battery_sensor_info->string_soc, battery_sensor_info->alarm_code, battery_sensor_info->battery_state);
}

/**
 * @brief Encode a battery_sensor_info struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param battery_sensor_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_sensor_info_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_battery_sensor_info_t* battery_sensor_info)
{
    return mavlink_msg_battery_sensor_info_pack_status(system_id, component_id, _status, msg,  battery_sensor_info->timestamp, battery_sensor_info->string_current, battery_sensor_info->string_voltage, battery_sensor_info->string_soc, battery_sensor_info->alarm_code, battery_sensor_info->battery_state);
}

/**
 * @brief Send a battery_sensor_info message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  time since system start (microseconds)
 * @param string_current  bms current
 * @param string_voltage  bms voltage
 * @param string_soc  bms  soc
 * @param alarm_code  bms error code
 * @param battery_state  1- charge ,2-discharge
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_battery_sensor_info_send(mavlink_channel_t chan, uint64_t timestamp, float string_current, float string_voltage, float string_soc, uint32_t alarm_code, uint8_t battery_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, string_current);
    _mav_put_float(buf, 12, string_voltage);
    _mav_put_float(buf, 16, string_soc);
    _mav_put_uint32_t(buf, 20, alarm_code);
    _mav_put_uint8_t(buf, 24, battery_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO, buf, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
#else
    mavlink_battery_sensor_info_t packet;
    packet.timestamp = timestamp;
    packet.string_current = string_current;
    packet.string_voltage = string_voltage;
    packet.string_soc = string_soc;
    packet.alarm_code = alarm_code;
    packet.battery_state = battery_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
#endif
}

/**
 * @brief Send a battery_sensor_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_battery_sensor_info_send_struct(mavlink_channel_t chan, const mavlink_battery_sensor_info_t* battery_sensor_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_battery_sensor_info_send(chan, battery_sensor_info->timestamp, battery_sensor_info->string_current, battery_sensor_info->string_voltage, battery_sensor_info->string_soc, battery_sensor_info->alarm_code, battery_sensor_info->battery_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO, (const char *)battery_sensor_info, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_battery_sensor_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float string_current, float string_voltage, float string_soc, uint32_t alarm_code, uint8_t battery_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, string_current);
    _mav_put_float(buf, 12, string_voltage);
    _mav_put_float(buf, 16, string_soc);
    _mav_put_uint32_t(buf, 20, alarm_code);
    _mav_put_uint8_t(buf, 24, battery_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO, buf, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
#else
    mavlink_battery_sensor_info_t *packet = (mavlink_battery_sensor_info_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->string_current = string_current;
    packet->string_voltage = string_voltage;
    packet->string_soc = string_soc;
    packet->alarm_code = alarm_code;
    packet->battery_state = battery_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO, (const char *)packet, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE BATTERY_SENSOR_INFO UNPACKING


/**
 * @brief Get field timestamp from battery_sensor_info message
 *
 * @return  time since system start (microseconds)
 */
static inline uint64_t mavlink_msg_battery_sensor_info_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field string_current from battery_sensor_info message
 *
 * @return  bms current
 */
static inline float mavlink_msg_battery_sensor_info_get_string_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field string_voltage from battery_sensor_info message
 *
 * @return  bms voltage
 */
static inline float mavlink_msg_battery_sensor_info_get_string_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field string_soc from battery_sensor_info message
 *
 * @return  bms  soc
 */
static inline float mavlink_msg_battery_sensor_info_get_string_soc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field alarm_code from battery_sensor_info message
 *
 * @return  bms error code
 */
static inline uint32_t mavlink_msg_battery_sensor_info_get_alarm_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field battery_state from battery_sensor_info message
 *
 * @return  1- charge ,2-discharge
 */
static inline uint8_t mavlink_msg_battery_sensor_info_get_battery_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Decode a battery_sensor_info message into a struct
 *
 * @param msg The message to decode
 * @param battery_sensor_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_battery_sensor_info_decode(const mavlink_message_t* msg, mavlink_battery_sensor_info_t* battery_sensor_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    battery_sensor_info->timestamp = mavlink_msg_battery_sensor_info_get_timestamp(msg);
    battery_sensor_info->string_current = mavlink_msg_battery_sensor_info_get_string_current(msg);
    battery_sensor_info->string_voltage = mavlink_msg_battery_sensor_info_get_string_voltage(msg);
    battery_sensor_info->string_soc = mavlink_msg_battery_sensor_info_get_string_soc(msg);
    battery_sensor_info->alarm_code = mavlink_msg_battery_sensor_info_get_alarm_code(msg);
    battery_sensor_info->battery_state = mavlink_msg_battery_sensor_info_get_battery_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN? msg->len : MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN;
        memset(battery_sensor_info, 0, MAVLINK_MSG_ID_BATTERY_SENSOR_INFO_LEN);
    memcpy(battery_sensor_info, _MAV_PAYLOAD(msg), len);
#endif
}
