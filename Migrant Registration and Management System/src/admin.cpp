#include "admin.h"

admin::admin()// admin consturctor
{
    username = "admin";
    password = "admin123";
}

bool admin::login()// kullanıcı girişini sağlayan fonksiyon
    {
    bool control;
    string tempUserName, tempPassword;

    cout << "Username: ";
    cin >> tempUserName;
    cout << "Password: ";
    cin >> tempPassword;

    if(tempPassword == password && tempUserName == username)
    {
        return true;
    }
    else
    {
        return false;
    }
}