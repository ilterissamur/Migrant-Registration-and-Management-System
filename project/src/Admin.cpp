#include "Admin.h"

Admin::Admin() // Default constructor of admin class.
{
    username = "admin";
    password = "admin123";
}

bool Admin::login() // Function that provides the user login.
{
    string tempUserName, tempPassword;

    cout << "Username: ";
    cin >> tempUserName;
    cout << "Password: ";
    cin >> tempPassword;
    // Check user login's information. If it is true return boolean true, return false otherwise.
    if (tempPassword == password && tempUserName == username)
    {
        return true;
    }
    else
    {
        return false;
    }
}