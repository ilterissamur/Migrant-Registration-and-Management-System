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
    gender = source.getGender();
    id = source.getID();
}

void Refugee::setRefugeeData(string id, string name, string surname, int age, string nationallity, string gender, string camp)
{
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->camp = camp;
}

void Refugee::setCamp()
{
    ifstream myFile1, myFile2;
    myFile1.open("camp.txt", ios::in);
    myFile2.open("camp.txt", ios::in);

    int option, j = 0;
    string tempString;

    for (size_t i = 0; i < 3; i++)
    {
        myFile1 >> tempString;
        cout << ++j << "- " << tempString << endl;
    }
    cout << "Choose camp: ";
    cin >> option;
    while (option < 1 || option > 3)
    {
        cout << "You entered invalid choice!! Please again enter your choose: ";
        cin >> option;
    }
    for (size_t i = 0; i < option; i++)
    {
        myFile2 >> camp;
    }

    myFile1.close();
    myFile2.close();
}

void Refugee::addRefugeeFile()
{
    ofstream myFile;
    myFile.open("refugee.txt", ios::app);

    myFile << id << " " << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << camp << endl;

    myFile.close();
}

string Refugee::getCamp()
{
    return camp;
}