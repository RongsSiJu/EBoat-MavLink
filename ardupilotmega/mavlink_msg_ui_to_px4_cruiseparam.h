#pragma once
// MESSAGE UI_TO_PX4_CRUISEPARAM PACKING

#define MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM 50013


typedef struct __mavlink_ui_to_px4_cruiseparam_t {
 uint64_t timestamp; /*<  Timestamp in milliseconds since system boot*/
 float target_speed; /*<  */
 float target_heading; /*<  */
} mavlink_ui_to_px4_cruiseparam_t;

#define MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN 16
#define MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN 16
#define MAVLINK_MSG_ID_50013_LEN 16
#define MAVLINK_MSG_ID_50013_MIN_LEN 16

#define MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC 70
#define MAVLINK_MSG_ID_50013_CRC 70



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UI_TO_PX4_CRUISEPARAM { \
    50013, \
    "UI_TO_PX4_CRUISEPARAM", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ui_to_px4_cruiseparam_t, timestamp) }, \
         { "target_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ui_to_px4_cruiseparam_t, target_speed) }, \
         { "target_heading", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ui_to_px4_cruiseparam_t, target_heading) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UI_TO_PX4_CRUISEPARAM { \
    "UI_TO_PX4_CRUISEPARAM", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ui_to_px4_cruiseparam_t, timestamp) }, \
         { "target_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ui_to_px4_cruiseparam_t, target_speed) }, \
         { "target_heading", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ui_to_px4_cruiseparam_t, target_heading) }, \
         } \
}
#endif

/**
 * @brief Pack a ui_to_px4_cruiseparam message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param target_speed  
 * @param target_heading  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ui_to_px4_cruiseparam_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float target_speed, float target_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, target_speed);
    _mav_put_float(buf, 12, target_heading);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
#else
    mavlink_ui_to_px4_cruiseparam_t packet;
    packet.timestamp = timestamp;
    packet.target_speed = target_speed;
    packet.target_heading = target_heading;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
}

/**
 * @brief Pack a ui_to_px4_cruiseparam message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param target_speed  
 * @param target_heading  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ui_to_px4_cruiseparam_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, float target_speed, float target_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, target_speed);
    _mav_put_float(buf, 12, target_heading);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
#else
    mavlink_ui_to_px4_cruiseparam_t packet;
    packet.timestamp = timestamp;
    packet.target_speed = target_speed;
    packet.target_heading = target_heading;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
#endif
}

/**
 * @brief Pack a ui_to_px4_cruiseparam message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param target_speed  
 * @param target_heading  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ui_to_px4_cruiseparam_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float target_speed,float target_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, target_speed);
    _mav_put_float(buf, 12, target_heading);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
#else
    mavlink_ui_to_px4_cruiseparam_t packet;
    packet.timestamp = timestamp;
    packet.target_speed = target_speed;
    packet.target_heading = target_heading;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
}

/**
 * @brief Encode a ui_to_px4_cruiseparam struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ui_to_px4_cruiseparam C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ui_to_px4_cruiseparam_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ui_to_px4_cruiseparam_t* ui_to_px4_cruiseparam)
{
    return mavlink_msg_ui_to_px4_cruiseparam_pack(system_id, component_id, msg, ui_to_px4_cruiseparam->timestamp, ui_to_px4_cruiseparam->target_speed, ui_to_px4_cruiseparam->target_heading);
}

/**
 * @brief Encode a ui_to_px4_cruiseparam struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ui_to_px4_cruiseparam C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ui_to_px4_cruiseparam_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ui_to_px4_cruiseparam_t* ui_to_px4_cruiseparam)
{
    return mavlink_msg_ui_to_px4_cruiseparam_pack_chan(system_id, component_id, chan, msg, ui_to_px4_cruiseparam->timestamp, ui_to_px4_cruiseparam->target_speed, ui_to_px4_cruiseparam->target_heading);
}

/**
 * @brief Encode a ui_to_px4_cruiseparam struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ui_to_px4_cruiseparam C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ui_to_px4_cruiseparam_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ui_to_px4_cruiseparam_t* ui_to_px4_cruiseparam)
{
    return mavlink_msg_ui_to_px4_cruiseparam_pack_status(system_id, component_id, _status, msg,  ui_to_px4_cruiseparam->timestamp, ui_to_px4_cruiseparam->target_speed, ui_to_px4_cruiseparam->target_heading);
}

/**
 * @brief Send a ui_to_px4_cruiseparam message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param target_speed  
 * @param target_heading  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ui_to_px4_cruiseparam_send(mavlink_channel_t chan, uint64_t timestamp, float target_speed, float target_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, target_speed);
    _mav_put_float(buf, 12, target_heading);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM, buf, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
#else
    mavlink_ui_to_px4_cruiseparam_t packet;
    packet.timestamp = timestamp;
    packet.target_speed = target_speed;
    packet.target_heading = target_heading;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM, (const char *)&packet, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
#endif
}

/**
 * @brief Send a ui_to_px4_cruiseparam message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ui_to_px4_cruiseparam_send_struct(mavlink_channel_t chan, const mavlink_ui_to_px4_cruiseparam_t* ui_to_px4_cruiseparam)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ui_to_px4_cruiseparam_send(chan, ui_to_px4_cruiseparam->timestamp, ui_to_px4_cruiseparam->target_speed, ui_to_px4_cruiseparam->target_heading);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM, (const char *)ui_to_px4_cruiseparam, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
#endif
}

#if MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ui_to_px4_cruiseparam_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float target_speed, float target_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, target_speed);
    _mav_put_float(buf, 12, target_heading);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM, buf, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
#else
    mavlink_ui_to_px4_cruiseparam_t *packet = (mavlink_ui_to_px4_cruiseparam_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->target_speed = target_speed;
    packet->target_heading = target_heading;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM, (const char *)packet, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_CRC);
#endif
}
#endif

#endif

// MESSAGE UI_TO_PX4_CRUISEPARAM UNPACKING


/**
 * @brief Get field timestamp from ui_to_px4_cruiseparam message
 *
 * @return  Timestamp in milliseconds since system boot
 */
static inline uint64_t mavlink_msg_ui_to_px4_cruiseparam_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field target_speed from ui_to_px4_cruiseparam message
 *
 * @return  
 */
static inline float mavlink_msg_ui_to_px4_cruiseparam_get_target_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field target_heading from ui_to_px4_cruiseparam message
 *
 * @return  
 */
static inline float mavlink_msg_ui_to_px4_cruiseparam_get_target_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a ui_to_px4_cruiseparam message into a struct
 *
 * @param msg The message to decode
 * @param ui_to_px4_cruiseparam C-struct to decode the message contents into
 */
static inline void mavlink_msg_ui_to_px4_cruiseparam_decode(const mavlink_message_t* msg, mavlink_ui_to_px4_cruiseparam_t* ui_to_px4_cruiseparam)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ui_to_px4_cruiseparam->timestamp = mavlink_msg_ui_to_px4_cruiseparam_get_timestamp(msg);
    ui_to_px4_cruiseparam->target_speed = mavlink_msg_ui_to_px4_cruiseparam_get_target_speed(msg);
    ui_to_px4_cruiseparam->target_heading = mavlink_msg_ui_to_px4_cruiseparam_get_target_heading(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN? msg->len : MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN;
        memset(ui_to_px4_cruiseparam, 0, MAVLINK_MSG_ID_UI_TO_PX4_CRUISEPARAM_LEN);
    memcpy(ui_to_px4_cruiseparam, _MAV_PAYLOAD(msg), len);
#endif
}
