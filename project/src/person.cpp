#include "person.h"

void person::createPerson() // kullanıcıdan yeni person alan fonksiyon
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

void person::createID() // person idsini oluşturan fonksiyon
{
    int tempNum1, tempNum2;
    string tempID;

    srand(time(0));

    tempNum1 = rand() % 9999 + 1000;
    tempNum2 = rand() % 9999 + 1000;

    tempID = to_string(tempNum1);
    tempID = tempID + to_string(tempNum2);

    id = tempID;
}

void person::addFile() // dataya person ekleyen fonksiyon
{
    ofstream myFile;
    myFile.open("data.txt", ios::app);

    myFile << "\n"
           << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << education;

    myFile.close();
}

void person::setData(string name, string surname, int age, string nationallity, string gender, string education) // datadan person bilgilerini alan fonksiyon
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