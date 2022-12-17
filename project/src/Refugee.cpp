#include "Refugee.h"

Refugee::Refugee()
{
}

Refugee::Refugee(Person &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getNationallity();
}

void Refugee::setCamp()
{
    int option, j = 0;
    string tempString;
    ifstream myFile;
    myFile.open("camp.txt", ios::in);

    while (!myFile.eof())
    {
        myFile >> tempString;
        cout << ++j << "- " << tempString << endl;
    }
    cout << "Choose camp: ";
    cin >> option;

    while (option <= 0 || option > 3)
    {
        cout << "You entered invalid choice!! Please again enter your choose: ";
        cin >> option;
    }

    for (size_t i = 0; i < option; i++)
    {
        myFile >> camp;
    }
}