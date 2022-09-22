#ifndef __PROTOCOL_H__
#define __PROTOCOL_H__

// server和client的公共头文件
enum EnMsgType
{
    LOGIN_MSG = 1000,  // 登录消息
    LOGIN_MSG_ACK,     // 登录响应消息
    LOGINOUT_MSG,      // 注销消息
    REGISTER_MSG,      // 注册消息
    REGISTER_MSG_ACK,  // 注册响应消息
    ONE_CHAT_MSG,      // 聊天消息
    ADD_FRIEND_MSG,    // 添加好友消息

    CREATE_GROUP_MSG,  // 创建群组
    ADD_GROUP_MSG,     // 加入群组
    GROUP_CHAT_MSG,    // 群聊天
};

enum ErrorCode
{

    PASSWORD_ERROR = 2000,
    NO_EXIST_USER,
    NO_EXIST_Group
};

#endif // __PROTOCOL_H__

// {"msgid":1,"id":13,"password":"123456"} 