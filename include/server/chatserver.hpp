#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
using namespace muduo;
using namespace muduo::net;

// 服务器类，基于muduo库开发
class ChatServer
{
public:
	// 初始化聊天服务器对象
	ChatServer(EventLoop *loop,
		const InetAddress &listenAddr,
		const std::string &nameArg);

    // 开启事件循环
	void start();

private:
    // 连接相关信息的回调函数（新连接到来/旧连接断开）
    void onConnection(const TcpConnectionPtr &);

    // 读写事件相关信息的回调函数
    void onMessage(const TcpConnectionPtr &,
                   Buffer *,
                   Timestamp);

	TcpServer _server;  
	EventLoop *_loop;
};

#endif // CHATSERVER_H