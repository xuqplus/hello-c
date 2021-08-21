#include <iostream>

using namespace std;

class User
{
private:
    /* data */
    int id;

public:
    string name;
    User(/* args */);
    User(int id, string name);
    int getId();
};

User::User(/* args */)
{
    cout << "User::User .." << endl;
}

User::User(int id, string name)
{
    User::id = id;
    User::name = name;
    cout << "User::User id=" << id << ", name=" << name << endl;
}

int User::getId(void)
{
    return id;
}
