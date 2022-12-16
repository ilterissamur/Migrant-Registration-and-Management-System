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

    myFile1 << "\n"
            << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << education;

    myFile2 << "\n"
            << id;

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
        cout << "Please input person's iq test point:";
        cin >> iqPoint;

        cout << "Please input person's mental test point:";
        cin >> mentalPoint;

        cout << "Please input person's acculturation test point:";
        cin >> acculturationPoint;

        cout << "Please input applicant's health test point:";
        cin >> healthPoint;

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
    else if (p.getAge() > 59)
    {
        return -2;
    }

    return 4;
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