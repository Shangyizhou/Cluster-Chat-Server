#ifndef __GROUP_H__
#define __GROUP_H__

#include <string>
#include <vector>
#include "group_user.hpp"

class Group
{
public:
    Group(int id = -1, std::string name = "", std::string desc = "")
        : _id(id),
          _desc(desc),
          _name(name)
    {}

    void setId(int id) { _id = id; }
    void setName(std::string name) { _name = name; }
    void setDesc(std::string desc) { _desc = desc; }

    int getId() { return _id; }
    std::string getName() { return _name; }
    std::string getDesc() { return _desc; }
    std::vector<GroupUser> &getUsers() { return _users; }

private:
    int _id;
    std::string _name;
    std::string _desc;
    std::vector<GroupUser> _users;
};

#endif // __GROUP_H__