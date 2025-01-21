#pragma once
// MESSAGE PX4_TO_UI PACKING

#define MAVLINK_MSG_ID_PX4_TO_UI 50010


typedef struct __mavlink_px4_to_ui_t {
 uint64_t timestamp; /*<  Timestamp in milliseconds since system boot*/
 float eboat_speed; /*<  Speed of eboat*/
 float eboat_heading; /*<  Heading of the boat*/
 uint8_t gear; /*<  Control gear (0: Park, 1: Neutral, 2: Reverse, 3: Drive)*/
} mavlink_px4_to_ui_t;

#define MAVLINK_MSG_ID_PX4_TO_UI_LEN 17
#define MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN 17
#define MAVLINK_MSG_ID_50010_LEN 17
#define MAVLINK_MSG_ID_50010_MIN_LEN 17

#define MAVLINK_MSG_ID_PX4_TO_UI_CRC 167
#define MAVLINK_MSG_ID_50010_CRC 167



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PX4_TO_UI { \
    50010, \
    "PX4_TO_UI", \
    4, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_px4_to_ui_t, timestamp) }, \
         { "gear", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_px4_to_ui_t, gear) }, \
         { "eboat_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_px4_to_ui_t, eboat_speed) }, \
         { "eboat_heading", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_px4_to_ui_t, eboat_heading) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PX4_TO_UI { \
    "PX4_TO_UI", \
    4, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_px4_to_ui_t, timestamp) }, \
         { "gear", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_px4_to_ui_t, gear) }, \
         { "eboat_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_px4_to_ui_t, eboat_speed) }, \
         { "eboat_heading", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_px4_to_ui_t, eboat_heading) }, \
         } \
}
#endif

/**
 * @brief Pack a px4_to_ui message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param gear  Control gear (0: Park, 1: Neutral, 2: Reverse, 3: Drive)
 * @param eboat_speed  Speed of eboat
 * @param eboat_heading  Heading of the boat
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_px4_to_ui_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t gear, float eboat_speed, float eboat_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PX4_TO_UI_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, eboat_speed);
    _mav_put_float(buf, 12, eboat_heading);
    _mav_put_uint8_t(buf, 16, gear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
#else
    mavlink_px4_to_ui_t packet;
    packet.timestamp = timestamp;
    packet.eboat_speed = eboat_speed;
    packet.eboat_heading = eboat_heading;
    packet.gear = gear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PX4_TO_UI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
}

/**
 * @brief Pack a px4_to_ui message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param gear  Control gear (0: Park, 1: Neutral, 2: Reverse, 3: Drive)
 * @param eboat_speed  Speed of eboat
 * @param eboat_heading  Heading of the boat
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_px4_to_ui_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t gear, float eboat_speed, float eboat_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PX4_TO_UI_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, eboat_speed);
    _mav_put_float(buf, 12, eboat_heading);
    _mav_put_uint8_t(buf, 16, gear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
#else
    mavlink_px4_to_ui_t packet;
    packet.timestamp = timestamp;
    packet.eboat_speed = eboat_speed;
    packet.eboat_heading = eboat_heading;
    packet.gear = gear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PX4_TO_UI;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
#endif
}

/**
 * @brief Pack a px4_to_ui message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param gear  Control gear (0: Park, 1: Neutral, 2: Reverse, 3: Drive)
 * @param eboat_speed  Speed of eboat
 * @param eboat_heading  Heading of the boat
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_px4_to_ui_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t gear,float eboat_speed,float eboat_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PX4_TO_UI_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, eboat_speed);
    _mav_put_float(buf, 12, eboat_heading);
    _mav_put_uint8_t(buf, 16, gear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
#else
    mavlink_px4_to_ui_t packet;
    packet.timestamp = timestamp;
    packet.eboat_speed = eboat_speed;
    packet.eboat_heading = eboat_heading;
    packet.gear = gear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PX4_TO_UI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
}

/**
 * @brief Encode a px4_to_ui struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param px4_to_ui C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_px4_to_ui_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_px4_to_ui_t* px4_to_ui)
{
    return mavlink_msg_px4_to_ui_pack(system_id, component_id, msg, px4_to_ui->timestamp, px4_to_ui->gear, px4_to_ui->eboat_speed, px4_to_ui->eboat_heading);
}

/**
 * @brief Encode a px4_to_ui struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param px4_to_ui C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_px4_to_ui_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_px4_to_ui_t* px4_to_ui)
{
    return mavlink_msg_px4_to_ui_pack_chan(system_id, component_id, chan, msg, px4_to_ui->timestamp, px4_to_ui->gear, px4_to_ui->eboat_speed, px4_to_ui->eboat_heading);
}

/**
 * @brief Encode a px4_to_ui struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param px4_to_ui C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_px4_to_ui_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_px4_to_ui_t* px4_to_ui)
{
    return mavlink_msg_px4_to_ui_pack_status(system_id, component_id, _status, msg,  px4_to_ui->timestamp, px4_to_ui->gear, px4_to_ui->eboat_speed, px4_to_ui->eboat_heading);
}

/**
 * @brief Send a px4_to_ui message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param gear  Control gear (0: Park, 1: Neutral, 2: Reverse, 3: Drive)
 * @param eboat_speed  Speed of eboat
 * @param eboat_heading  Heading of the boat
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_px4_to_ui_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t gear, float eboat_speed, float eboat_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PX4_TO_UI_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, eboat_speed);
    _mav_put_float(buf, 12, eboat_heading);
    _mav_put_uint8_t(buf, 16, gear);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PX4_TO_UI, buf, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
#else
    mavlink_px4_to_ui_t packet;
    packet.timestamp = timestamp;
    packet.eboat_speed = eboat_speed;
    packet.eboat_heading = eboat_heading;
    packet.gear = gear;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PX4_TO_UI, (const char *)&packet, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
#endif
}

/**
 * @brief Send a px4_to_ui message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_px4_to_ui_send_struct(mavlink_channel_t chan, const mavlink_px4_to_ui_t* px4_to_ui)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_px4_to_ui_send(chan, px4_to_ui->timestamp, px4_to_ui->gear, px4_to_ui->eboat_speed, px4_to_ui->eboat_heading);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PX4_TO_UI, (const char *)px4_to_ui, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
#endif
}

#if MAVLINK_MSG_ID_PX4_TO_UI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_px4_to_ui_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t gear, float eboat_speed, float eboat_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, eboat_speed);
    _mav_put_float(buf, 12, eboat_heading);
    _mav_put_uint8_t(buf, 16, gear);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PX4_TO_UI, buf, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
#else
    mavlink_px4_to_ui_t *packet = (mavlink_px4_to_ui_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->eboat_speed = eboat_speed;
    packet->eboat_heading = eboat_heading;
    packet->gear = gear;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PX4_TO_UI, (const char *)packet, MAVLINK_MSG_ID_PX4_TO_UI_MIN_LEN, MAVLINK_MSG_ID_PX4_TO_UI_LEN, MAVLINK_MSG_ID_PX4_TO_UI_CRC);
#endif
}
#endif

#endif

// MESSAGE PX4_TO_UI UNPACKING


/**
 * @brief Get field timestamp from px4_to_ui message
 *
 * @return  Timestamp in milliseconds since system boot
 */
static inline uint64_t mavlink_msg_px4_to_ui_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field gear from px4_to_ui message
 *
 * @return  Control gear (0: Park, 1: Neutral, 2: Reverse, 3: Drive)
 */
static inline uint8_t mavlink_msg_px4_to_ui_get_gear(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field eboat_speed from px4_to_ui message
 *
 * @return  Speed of eboat
 */
static inline float mavlink_msg_px4_to_ui_get_eboat_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field eboat_heading from px4_to_ui message
 *
 * @return  Heading of the boat
 */
static inline float mavlink_msg_px4_to_ui_get_eboat_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a px4_to_ui message into a struct
 *
 * @param msg The message to decode
 * @param px4_to_ui C-struct to decode the message contents into
 */
static inline void mavlink_msg_px4_to_ui_decode(const mavlink_message_t* msg, mavlink_px4_to_ui_t* px4_to_ui)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    px4_to_ui->timestamp = mavlink_msg_px4_to_ui_get_timestamp(msg);
    px4_to_ui->eboat_speed = mavlink_msg_px4_to_ui_get_eboat_speed(msg);
    px4_to_ui->eboat_heading = mavlink_msg_px4_to_ui_get_eboat_heading(msg);
    px4_to_ui->gear = mavlink_msg_px4_to_ui_get_gear(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PX4_TO_UI_LEN? msg->len : MAVLINK_MSG_ID_PX4_TO_UI_LEN;
        memset(px4_to_ui, 0, MAVLINK_MSG_ID_PX4_TO_UI_LEN);
    memcpy(px4_to_ui, _MAV_PAYLOAD(msg), len);
#endif
}
