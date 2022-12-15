#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>

using namespace std;

class admin
{
private:
    string username, password;

public:
    admin();
    bool login();
};

#endif