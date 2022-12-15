#include "person.h"

void person::createPerson() // takes new person from user
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter surname: ";
    cin >> surname;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter nationallity: ";
    cin >> nationallity;
    cout << "Enter gender: ";
    cin >> gender;
    cout << "Enter education level: ";
    cin >> education;

    createID();
}

void person::createID() // create person id randomly
{
    int tempNum;
    string tempID;

    for (size_t i = 0; i < 8; i++)
    {
        tempNum = rand() % 9 + 1;
        tempID = tempID + to_string(tempNum);
    }

    id = tempID;
}

void person::addFile() // adds new person to data.txt
{
    ofstream myFile;
    myFile.open("data.txt", ios::app);

    myFile << "\n"
           << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << education;

    myFile.close();
}

void person::setData(string name, string surname, int age, string nationallity, string gender, string education) // fills person attributes
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->education = education;
}

string person::getName()
{
    return name;
}

string person::getSurname()
{
    return surname;
}

int person::getAge()
{
    return age;
}

string person::getNationallity()
{
    return nationallity;
}

string person::getGender()
{
    return gender;
}

string person::getEducation()
{
    return education;
}

string person::getID()
{
    return id;
}