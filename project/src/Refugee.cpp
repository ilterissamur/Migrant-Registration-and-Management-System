#include "Refugee.h"

Refugee::Refugee() // Default Constructor
{
}

Refugee::Refugee(Person &source) // Conversion constructor from Person class.
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getGender();
    id = source.getID();
}

// Set refugee data to our persons' informations.
void Refugee::setRefugeeData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &camp)
{
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->camp = camp;
}

// Set camp according to the user's preferences.
void Refugee::setCamp()
{
    ifstream myFile1, myFile2;
    myFile1.open("camp.txt", ios::in); // We open two times file. One file is showing the camps' options, the another is assigned for camp according to the option.
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
    while (option < 1 || option > 3) // Checking invalid value.
    {
        cout << "You entered invalid choice!! Please again enter your choose: ";
        cin >> option;
    }
    for (size_t i = 0; i < option; i++) // Assing the camp according to the option.
    {
        myFile2 >> camp;
    }

    myFile1.close(); // Close the files.
    myFile2.close();
}

void Refugee::addRefugeeFile() // Add refugees' information to the end of the file (app mode).
{
    ofstream myFile;
    myFile.open("refugee.txt", ios::app);

    myFile << id << " " << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << camp << endl;

    myFile.close();
}

// Getter method for camp imformation.
string Refugee::getCamp()
{
    return camp;
}