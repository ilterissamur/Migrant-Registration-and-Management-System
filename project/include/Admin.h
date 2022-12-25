#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>

using namespace std;
// Admin Class' Definition.
class Admin
{
private:
    string username, password; // Create these private variable to encrypt management system. You can use it to a staff member working in the management system.

public:
    Admin();
    bool login();
};
// End of the Admin Class' Definition.
#endif