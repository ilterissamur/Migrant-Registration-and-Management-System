#include "admin.h"

Admin::Admin() // default constructor of admin class
{
    username = "admin";
    password = "admin123";
}

bool Admin::login() // function that provides the user login
{
    string tempUserName, tempPassword;

    cout << "Username: ";
    cin >> tempUserName;
    cout << "Password: ";
    cin >> tempPassword;

    if (tempPassword == password && tempUserName == username)
    {
        return true;
    }
    else
    {
        return false;
    }
}