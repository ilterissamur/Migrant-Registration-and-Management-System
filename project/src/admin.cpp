#include "admin.h"

admin::admin() // default constructor of admin class
{
    username = "admin";
    password = "admin123";
}

bool admin::login() // function that provides the user login
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