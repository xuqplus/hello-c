#include <stdio.h>

#include "day07/user.cpp"

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
    return 0;
}