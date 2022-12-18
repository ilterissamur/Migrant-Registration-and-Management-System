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
    int option, j = 0, tempSize;
    string tempString;
    ifstream myFile1;
    ifstream myFile2;
    myFile1.open("camp.txt", ios::in);
    myFile2.open("avaliableSize.txt", ios::in);

    while (!myFile2.eof())
    {
        myFile1 >> tempString;
        myFile2 >> tempSize;
        cout << ++j << "- " << tempString << "Number of avaliable refugees: " << tempSize << endl;
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
        myFile1 >> camp;
    }

    myFile1.close();
    myFile2.close();
}