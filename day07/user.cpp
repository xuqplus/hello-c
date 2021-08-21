#include <iostream>

using namespace std;

class User
{
private:
    /* data */
    int id;

public:
    int name;
    User(/* args */);
    User(int id, int name);
    int getId();
};

User::User(/* args */)
{
    cout << "User::User .." << endl;
}

User::User(int id, int name)
{
    User::id = id;
    User::name = name;
    cout << "User::User id=" << id << ", name=" << name << endl;
}

int User::getId(void)
{
    return id;
}
