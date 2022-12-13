#include "person.h"

void migrant::createMigrant() //kullanıcıdan yeni migrant alan fonksiyon
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

void migrant::createID() //migrant idsini oluşturan fonksiyon
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

void migrant::addFile()//dataya migrant ekleyen fonksiyon
{
    ofstream myFile;
    myFile.open("data.txt", ios::app);

    myFile << "\n" << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << education;

    myFile.close();
}

void migrant::setData(string name, string surname, int age, string nationallity, string gender, string education)//datadan migrant bilgilerini alan fonksiyon
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->education = education;
}

string migrant::getName()
{
    return name;
}

string migrant::getSurname()
{
    return surname;
}

int migrant::getAge()
{
    return age;
}

string migrant::getNationallity()
{
    return nationallity;
}

string migrant::getGender()
{
    return gender;
}

string migrant::getEducation()
{
    return education;
}

string migrant::getID()
{
    return id;
}