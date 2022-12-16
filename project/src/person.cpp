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

void person::setData(string name, string surname, int age, string nationallity, string gender, string education, string id) // fills person attributes
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->education = education;
    this->id = id;
}

int person::filter(person p) // filters person is refugee or employee (BAKILACAK)
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

        if (personPoint > 85)
        {
            return 3;
        }
        else if (personPoint > 70)
        {
            return 2;
        }
        else if (personPoint > 55)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
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