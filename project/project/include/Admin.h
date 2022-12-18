#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>

using namespace std;

class Admin
{
private:
    string username, password;

public:
    Admin();
    bool login();
};

#endif