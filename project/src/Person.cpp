#include "Person.h"

Person::Person()
{
}

void Person::createPerson() // takes new person from user
{
    cout << "Enter name: ";
    cin >> name;
    cout << "\nEnter surname: ";
    cin >> surname;
    cout << "\nEnter age: ";
    cin >> age;
    cout << "\nEnter nationallity: ";
    cin >> nationallity;
    cout << "\nEnter gender: ";
    cin >> gender;

    createID();
}

void Person::createID() // create person id randomly
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

int Person::filter(Person p) // filters person is refugee or employee (BAKILACAK)
{
    if (p.getAge() < 18)
    {
        return -1;
    }
    else if (p.getAge() > 59)
    {
        return -2;
    }
    else if (17 < p.getAge() && p.getAge() < 60)
    {
        cout << "\nPlease input person's iq test point:";
        cin >> iqPoint;
        while (iqPoint <= 0 || iqPoint > 180)
        {
            cout << "\nInvalid value for iq point! Please enter new iq point:";
            cin >> iqPoint;
        }

        cout << "\nPlease input person's mental test point:";
        cin >> mentalPoint;

        while (mentalPoint <= 0 || mentalPoint > 100)
        {
            cout << "\nInvalid value for mental point! Please enter new mental point:";
            cin >> mentalPoint;
        }

        cout << "\nPlease input person's acculturation test point:";
        cin >> acculturationPoint;

        while (acculturationPoint <= 0 || acculturationPoint > 100)
        {
            cout << "\nInvalid value for accularation point! Please enter new acculturation point:";
            cin >> acculturationPoint;
        }

        cout << "\nPlease input applicant's health test point:";
        cin >> healthPoint;

        while (healthPoint <= 0 || healthPoint > 100)
        {
            cout << "\nInvalid value for health point! Please enter new health point:";
            cin >> healthPoint;
        }
    }

    personPoint = float(mentalPoint + acculturationPoint + healthPoint + iqPoint) / 4;

    if (personPoint >= 85)
    {
        return 3;
    }
    else if (personPoint >= 70)
    {
        return 2;
    }
    else if (personPoint >= 55)
    {
        return 1;
    }
    else
    {
        return -3;
    }
}

string Person::getName()
{
    return name;
}

string Person::getSurname()
{
    return surname;
}

int Person::getAge()
{
    return age;
}

string Person::getNationallity()
{
    return nationallity;
}

string Person::getGender()
{
    return gender;
}

string Person::getID()
{
    return id;
}

double Person::getPoint()
{
    return personPoint;
}

void Person::setName(string name)
{
    this->name = name;
}

void Person::setSurname(string surname)
{
    this->surname = surname;
}

void Person::setAge(int age)
{
    this->age = age;
}

void Person::setNationallity(string nationallity)
{
    this->nationallity = nationallity;
}

void Person::setGender(string gender)
{
    this->gender = gender;
}

void Person::setID(string id)
{
    this->id = id;
}