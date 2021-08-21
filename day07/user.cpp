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
    User(const User &obj);
    int getId();
    void valueParam(User user);
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

User::User(const User &obj)
{
    User::id = obj.id;
    User::name = obj.name;
    cout << "&obj=" << &obj << ", id=" << obj.id << ", name=" << obj.name << endl;
}

int User::getId(void)
{
    return id;
}

void User::valueParam(User user)
{
    cout << "valueParam &user=" << &user << ", id=" << user.id << ", name=" << user.name << endl;
    user.id = -1;
    user.name = "modified";
    cout << "valueParam &user=" << &user << ", id=" << user.id << ", name=" << user.name << endl;
}