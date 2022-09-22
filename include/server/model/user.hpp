#ifndef USER_H
#define USER_H

#include <string>

class User
{
public:
    User(int id = -1, std::string name = "", 
        std::string pwd = "", std::string state = "offline")
        : _id(id),
          _name(name),
          _state(state)
    {}

    void setId(const int &id) { _id = id; }
    void setName(const std::string &name) { _name = name; }
    void setPassword(const std::string &paw) { _password = paw; }
    void setState(const std::string &state) { _state = state; }

    int getId() { return _id; }
    std::string getName() { return _name; } 
    std::string getPassword() { return _password; } 
    std::string getState() { return _state; } 

protected:
    int _id;
    std::string _name;
    std::string _password;
    std::string _state;    
};


#endif // USER_H