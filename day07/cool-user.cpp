#include <iostream>
#ifndef User_h
#define User_h
#include "user.h"
#endif

using namespace std;

class CoolUser : public User
{
public:
    bool isCool;
    CoolUser(/* args */) : User()
    {
        this->isCool = true;
    }
};
