#ifndef OFFLINE_MESSAGE_MODEL_H
#define OFFLINE_MESSAGE_MODEL_H

#include <string>
#include <vector>
using namespace std;

// 提供离线消息表的操作接口方法
class OfflineMsgModel
{
public:
    // 存储用户的离线消息
    void insert(int userId, std::string msg);

    // 删除用户的离线消息
    void remove(int userId);

    // 查询用户的离线消息
    std::vector<std::string> query(int userId);
};

#endif // OFFLINE_MESSAGE_MODEL_H