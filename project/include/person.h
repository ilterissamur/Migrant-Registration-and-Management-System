#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class person
{
protected:
    string id, name, surname, nationallity, gender, education;
    int age;

public:
    void createPerson();
    void createID();
    void addFile();
    void setData(string name, string surname, int age, string nationallity, string gender, string education, string id);
    string getName();
    string getSurname();
    int getAge();
    string getNationallity();
    string getGender();
    string getEducation();
    string getID();
};

#endif