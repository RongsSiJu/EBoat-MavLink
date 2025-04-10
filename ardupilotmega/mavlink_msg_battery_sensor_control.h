#pragma once
// MESSAGE BATTERY_SENSOR_CONTROL PACKING

#define MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL 50016


typedef struct __mavlink_battery_sensor_control_t {
 uint64_t timestamp; /*<  time since system start (microseconds)*/
 uint8_t reset_alarm; /*<  1 reset alram ,others is invaliad*/
 uint8_t battery_control_mode; /*<  1-charge ,2-discharge, others  is invaliad*/
 uint8_t battery_control; /*<  2 on,3 off, others  is invaliad*/
} mavlink_battery_sensor_control_t;

#define MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN 11
#define MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN 11
#define MAVLINK_MSG_ID_50016_LEN 11
#define MAVLINK_MSG_ID_50016_MIN_LEN 11

#define MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC 56
#define MAVLINK_MSG_ID_50016_CRC 56



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BATTERY_SENSOR_CONTROL { \
    50016, \
    "BATTERY_SENSOR_CONTROL", \
    4, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_battery_sensor_control_t, timestamp) }, \
         { "reset_alarm", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_battery_sensor_control_t, reset_alarm) }, \
         { "battery_control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_battery_sensor_control_t, battery_control_mode) }, \
         { "battery_control", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_battery_sensor_control_t, battery_control) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BATTERY_SENSOR_CONTROL { \
    "BATTERY_SENSOR_CONTROL", \
    4, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_battery_sensor_control_t, timestamp) }, \
         { "reset_alarm", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_battery_sensor_control_t, reset_alarm) }, \
         { "battery_control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_battery_sensor_control_t, battery_control_mode) }, \
         { "battery_control", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_battery_sensor_control_t, battery_control) }, \
         } \
}
#endif

/**
 * @brief Pack a battery_sensor_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param reset_alarm  1 reset alram ,others is invaliad
 * @param battery_control_mode  1-charge ,2-discharge, others  is invaliad
 * @param battery_control  2 on,3 off, others  is invaliad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_sensor_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t reset_alarm, uint8_t battery_control_mode, uint8_t battery_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, reset_alarm);
    _mav_put_uint8_t(buf, 9, battery_control_mode);
    _mav_put_uint8_t(buf, 10, battery_control);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
#else
    mavlink_battery_sensor_control_t packet;
    packet.timestamp = timestamp;
    packet.reset_alarm = reset_alarm;
    packet.battery_control_mode = battery_control_mode;
    packet.battery_control = battery_control;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
}

/**
 * @brief Pack a battery_sensor_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param reset_alarm  1 reset alram ,others is invaliad
 * @param battery_control_mode  1-charge ,2-discharge, others  is invaliad
 * @param battery_control  2 on,3 off, others  is invaliad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_sensor_control_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t reset_alarm, uint8_t battery_control_mode, uint8_t battery_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, reset_alarm);
    _mav_put_uint8_t(buf, 9, battery_control_mode);
    _mav_put_uint8_t(buf, 10, battery_control);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
#else
    mavlink_battery_sensor_control_t packet;
    packet.timestamp = timestamp;
    packet.reset_alarm = reset_alarm;
    packet.battery_control_mode = battery_control_mode;
    packet.battery_control = battery_control;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a battery_sensor_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  time since system start (microseconds)
 * @param reset_alarm  1 reset alram ,others is invaliad
 * @param battery_control_mode  1-charge ,2-discharge, others  is invaliad
 * @param battery_control  2 on,3 off, others  is invaliad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_sensor_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t reset_alarm,uint8_t battery_control_mode,uint8_t battery_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, reset_alarm);
    _mav_put_uint8_t(buf, 9, battery_control_mode);
    _mav_put_uint8_t(buf, 10, battery_control);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
#else
    mavlink_battery_sensor_control_t packet;
    packet.timestamp = timestamp;
    packet.reset_alarm = reset_alarm;
    packet.battery_control_mode = battery_control_mode;
    packet.battery_control = battery_control;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
}

/**
 * @brief Encode a battery_sensor_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param battery_sensor_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_sensor_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_battery_sensor_control_t* battery_sensor_control)
{
    return mavlink_msg_battery_sensor_control_pack(system_id, component_id, msg, battery_sensor_control->timestamp, battery_sensor_control->reset_alarm, battery_sensor_control->battery_control_mode, battery_sensor_control->battery_control);
}

/**
 * @brief Encode a battery_sensor_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_sensor_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_sensor_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_battery_sensor_control_t* battery_sensor_control)
{
    return mavlink_msg_battery_sensor_control_pack_chan(system_id, component_id, chan, msg, battery_sensor_control->timestamp, battery_sensor_control->reset_alarm, battery_sensor_control->battery_control_mode, battery_sensor_control->battery_control);
}

/**
 * @brief Encode a battery_sensor_control struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param battery_sensor_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_sensor_control_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_battery_sensor_control_t* battery_sensor_control)
{
    return mavlink_msg_battery_sensor_control_pack_status(system_id, component_id, _status, msg,  battery_sensor_control->timestamp, battery_sensor_control->reset_alarm, battery_sensor_control->battery_control_mode, battery_sensor_control->battery_control);
}

/**
 * @brief Send a battery_sensor_control message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  time since system start (microseconds)
 * @param reset_alarm  1 reset alram ,others is invaliad
 * @param battery_control_mode  1-charge ,2-discharge, others  is invaliad
 * @param battery_control  2 on,3 off, others  is invaliad
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_battery_sensor_control_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t reset_alarm, uint8_t battery_control_mode, uint8_t battery_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, reset_alarm);
    _mav_put_uint8_t(buf, 9, battery_control_mode);
    _mav_put_uint8_t(buf, 10, battery_control);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL, buf, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
#else
    mavlink_battery_sensor_control_t packet;
    packet.timestamp = timestamp;
    packet.reset_alarm = reset_alarm;
    packet.battery_control_mode = battery_control_mode;
    packet.battery_control = battery_control;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
#endif
}

/**
 * @brief Send a battery_sensor_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_battery_sensor_control_send_struct(mavlink_channel_t chan, const mavlink_battery_sensor_control_t* battery_sensor_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_battery_sensor_control_send(chan, battery_sensor_control->timestamp, battery_sensor_control->reset_alarm, battery_sensor_control->battery_control_mode, battery_sensor_control->battery_control);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL, (const char *)battery_sensor_control, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_battery_sensor_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t reset_alarm, uint8_t battery_control_mode, uint8_t battery_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, reset_alarm);
    _mav_put_uint8_t(buf, 9, battery_control_mode);
    _mav_put_uint8_t(buf, 10, battery_control);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL, buf, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
#else
    mavlink_battery_sensor_control_t *packet = (mavlink_battery_sensor_control_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->reset_alarm = reset_alarm;
    packet->battery_control_mode = battery_control_mode;
    packet->battery_control = battery_control;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL, (const char *)packet, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE BATTERY_SENSOR_CONTROL UNPACKING


/**
 * @brief Get field timestamp from battery_sensor_control message
 *
 * @return  time since system start (microseconds)
 */
static inline uint64_t mavlink_msg_battery_sensor_control_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field reset_alarm from battery_sensor_control message
 *
 * @return  1 reset alram ,others is invaliad
 */
static inline uint8_t mavlink_msg_battery_sensor_control_get_reset_alarm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field battery_control_mode from battery_sensor_control message
 *
 * @return  1-charge ,2-discharge, others  is invaliad
 */
static inline uint8_t mavlink_msg_battery_sensor_control_get_battery_control_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field battery_control from battery_sensor_control message
 *
 * @return  2 on,3 off, others  is invaliad
 */
static inline uint8_t mavlink_msg_battery_sensor_control_get_battery_control(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Decode a battery_sensor_control message into a struct
 *
 * @param msg The message to decode
 * @param battery_sensor_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_battery_sensor_control_decode(const mavlink_message_t* msg, mavlink_battery_sensor_control_t* battery_sensor_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    battery_sensor_control->timestamp = mavlink_msg_battery_sensor_control_get_timestamp(msg);
    battery_sensor_control->reset_alarm = mavlink_msg_battery_sensor_control_get_reset_alarm(msg);
    battery_sensor_control->battery_control_mode = mavlink_msg_battery_sensor_control_get_battery_control_mode(msg);
    battery_sensor_control->battery_control = mavlink_msg_battery_sensor_control_get_battery_control(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN;
        memset(battery_sensor_control, 0, MAVLINK_MSG_ID_BATTERY_SENSOR_CONTROL_LEN);
    memcpy(battery_sensor_control, _MAV_PAYLOAD(msg), len);
#endif
}
