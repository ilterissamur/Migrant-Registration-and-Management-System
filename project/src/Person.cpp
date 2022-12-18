#include "Person.h"

void Person::createPerson() // takes new person from user
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

void Person::addFile() // adds new person to data.txt
{
    ofstream myFile1;
    ofstream myFile2;
    myFile1.open("data.txt", ios::app);
    myFile2.open("id.txt", ios::app);

    myFile1 << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << education << endl;

    myFile2 << id << endl;

    myFile1.close();
    myFile2.close();
}

void Person::setData(string name, string surname, int age, string nationallity, string gender, string education, string id) // fills person attributes
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->education = education;
    this->id = id;
}

int Person::filter(Person p) // filters person is refugee or employee (BAKILACAK)
{
    if (p.getAge() < 18)
    {
        return 0;
    }
    else if (17 < p.getAge() && p.getAge() < 60)
    {
        cout << "\nPlease input person's iq test point:";
        cin >> iqPoint;
        while (iqPoint <= 0 || iqPoint > 100)
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
    else if (p.getAge() > 59)
    {
        return -2;
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
        return -1;
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

string Person::getEducation()
{
    return education;
}

string Person::getID()
{
    return id;
}

Person::Person()
{
}