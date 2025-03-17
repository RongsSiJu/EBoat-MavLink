#pragma once
// MESSAGE UI_TO_PX4_MISSIONSTATE PACKING

#define MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE 50014


typedef struct __mavlink_ui_to_px4_missionstate_t {
 uint64_t timestamp; /*<  Timestamp in milliseconds since system boot*/
 uint8_t mission_state; /*<  mission state (0: Pause, 1: Resume)*/
} mavlink_ui_to_px4_missionstate_t;

#define MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN 9
#define MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN 9
#define MAVLINK_MSG_ID_50014_LEN 9
#define MAVLINK_MSG_ID_50014_MIN_LEN 9

#define MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC 174
#define MAVLINK_MSG_ID_50014_CRC 174



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UI_TO_PX4_MISSIONSTATE { \
    50014, \
    "UI_TO_PX4_MISSIONSTATE", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ui_to_px4_missionstate_t, timestamp) }, \
         { "mission_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ui_to_px4_missionstate_t, mission_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UI_TO_PX4_MISSIONSTATE { \
    "UI_TO_PX4_MISSIONSTATE", \
    2, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ui_to_px4_missionstate_t, timestamp) }, \
         { "mission_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ui_to_px4_missionstate_t, mission_state) }, \
         } \
}
#endif

/**
 * @brief Pack a ui_to_px4_missionstate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param mission_state  mission state (0: Pause, 1: Resume)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ui_to_px4_missionstate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, mission_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
#else
    mavlink_ui_to_px4_missionstate_t packet;
    packet.timestamp = timestamp;
    packet.mission_state = mission_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
}

/**
 * @brief Pack a ui_to_px4_missionstate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param mission_state  mission state (0: Pause, 1: Resume)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ui_to_px4_missionstate_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, mission_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
#else
    mavlink_ui_to_px4_missionstate_t packet;
    packet.timestamp = timestamp;
    packet.mission_state = mission_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
#endif
}

/**
 * @brief Pack a ui_to_px4_missionstate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param mission_state  mission state (0: Pause, 1: Resume)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ui_to_px4_missionstate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, mission_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
#else
    mavlink_ui_to_px4_missionstate_t packet;
    packet.timestamp = timestamp;
    packet.mission_state = mission_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
}

/**
 * @brief Encode a ui_to_px4_missionstate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ui_to_px4_missionstate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ui_to_px4_missionstate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ui_to_px4_missionstate_t* ui_to_px4_missionstate)
{
    return mavlink_msg_ui_to_px4_missionstate_pack(system_id, component_id, msg, ui_to_px4_missionstate->timestamp, ui_to_px4_missionstate->mission_state);
}

/**
 * @brief Encode a ui_to_px4_missionstate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ui_to_px4_missionstate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ui_to_px4_missionstate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ui_to_px4_missionstate_t* ui_to_px4_missionstate)
{
    return mavlink_msg_ui_to_px4_missionstate_pack_chan(system_id, component_id, chan, msg, ui_to_px4_missionstate->timestamp, ui_to_px4_missionstate->mission_state);
}

/**
 * @brief Encode a ui_to_px4_missionstate struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ui_to_px4_missionstate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ui_to_px4_missionstate_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ui_to_px4_missionstate_t* ui_to_px4_missionstate)
{
    return mavlink_msg_ui_to_px4_missionstate_pack_status(system_id, component_id, _status, msg,  ui_to_px4_missionstate->timestamp, ui_to_px4_missionstate->mission_state);
}

/**
 * @brief Send a ui_to_px4_missionstate message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Timestamp in milliseconds since system boot
 * @param mission_state  mission state (0: Pause, 1: Resume)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ui_to_px4_missionstate_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, mission_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE, buf, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
#else
    mavlink_ui_to_px4_missionstate_t packet;
    packet.timestamp = timestamp;
    packet.mission_state = mission_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE, (const char *)&packet, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
#endif
}

/**
 * @brief Send a ui_to_px4_missionstate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ui_to_px4_missionstate_send_struct(mavlink_channel_t chan, const mavlink_ui_to_px4_missionstate_t* ui_to_px4_missionstate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ui_to_px4_missionstate_send(chan, ui_to_px4_missionstate->timestamp, ui_to_px4_missionstate->mission_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE, (const char *)ui_to_px4_missionstate, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ui_to_px4_missionstate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, mission_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE, buf, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
#else
    mavlink_ui_to_px4_missionstate_t *packet = (mavlink_ui_to_px4_missionstate_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->mission_state = mission_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE, (const char *)packet, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_MIN_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_CRC);
#endif
}
#endif

#endif

// MESSAGE UI_TO_PX4_MISSIONSTATE UNPACKING


/**
 * @brief Get field timestamp from ui_to_px4_missionstate message
 *
 * @return  Timestamp in milliseconds since system boot
 */
static inline uint64_t mavlink_msg_ui_to_px4_missionstate_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field mission_state from ui_to_px4_missionstate message
 *
 * @return  mission state (0: Pause, 1: Resume)
 */
static inline uint8_t mavlink_msg_ui_to_px4_missionstate_get_mission_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a ui_to_px4_missionstate message into a struct
 *
 * @param msg The message to decode
 * @param ui_to_px4_missionstate C-struct to decode the message contents into
 */
static inline void mavlink_msg_ui_to_px4_missionstate_decode(const mavlink_message_t* msg, mavlink_ui_to_px4_missionstate_t* ui_to_px4_missionstate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ui_to_px4_missionstate->timestamp = mavlink_msg_ui_to_px4_missionstate_get_timestamp(msg);
    ui_to_px4_missionstate->mission_state = mavlink_msg_ui_to_px4_missionstate_get_mission_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN? msg->len : MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN;
        memset(ui_to_px4_missionstate, 0, MAVLINK_MSG_ID_UI_TO_PX4_MISSIONSTATE_LEN);
    memcpy(ui_to_px4_missionstate, _MAV_PAYLOAD(msg), len);
#endif
}
