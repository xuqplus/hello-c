#include <stdio.h>

#ifndef User_h
#define User_h
#include "day07/user.h"
#endif
#include "day07/cool-user.cpp"
#include "day08/thread.cpp"

using namespace std;

int main()
{
    printf("hello ..");
    cout << "123" << endl;

    // User user;
    User user;
    const string name = "qqx";
    User user2(7, name);
    // cout << "user2.id=" << user2.getId() << ", user2.name=" << user2.name << endl;

    // User user3(user2);
    // cout << "user3.id=" << user3.getId() << ", user3.name=" << user3.name << endl;

    // the copy constructor will get called when parse a object as value
    // - https://www.geeksforgeeks.org/g-fact-13/
    cout << "afore &user2=" << &user2 << " user2.id=" << user2.getId() << ", user2.name=" << user2.name << endl;
    user.valueParam(user2);
    user.valueParam(user2);
    cout << "after &user2=" << &user2 << " user2.id=" << user2.getId() << ", user2.name=" << user2.name << endl;

    // class pointer
    User *uPtr;
    uPtr = &user2;
    cout << "uPtr=" << uPtr << ", uPtr->getId()=" << uPtr->getId() << ", uPtr->name=" << uPtr->name << endl;
    uPtr->valueParam(*uPtr);

    // class inheritance
    CoolUser cuser;
    cout << cuser.isCool << endl;

    // test pthread
    test();
    return 0;
}