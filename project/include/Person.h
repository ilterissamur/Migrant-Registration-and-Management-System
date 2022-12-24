#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person
{
protected:
    string id, name, surname, nationallity, gender;
    int age, iqPoint, mentalPoint, healthPoint, acculturationPoint;
    double personPoint;

public:
    Person();
    void createPerson();
    void createID();
    int filter(Person p);
    string getName();
    string getSurname();
    int getAge();
    string getNationallity();
    string getGender();
    string getID();
    double getPoint();
    void setName(string name);
    void setSurname(string surname);
    void setAge(int age);
    void setNationallity(string nationallity);
    void setGender(string gender);
    void setID(string id);
};

#endif