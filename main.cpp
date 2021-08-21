#include <stdio.h>

#include "day07/user.cpp"

using namespace std;

int main()
{
    printf("hello ..");
    cout << "123" << endl;

    // User user;
    User user;
    User user2(1, 1);
    cout << "user2.id=" << user2.getId() << ", user2.name=" << user2.name << endl;
    return 0;
}