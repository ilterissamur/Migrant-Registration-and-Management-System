#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <fstream> // Declare of <fstream> to read and write process from the txt file.
#include <cstdlib> // Declare of <cstdlib> to create random id.
#include <ctime>   // Declare of <ctime to create random id(srandtime).

using namespace std;
// Start Person Class' Definition
class Person
{
protected:
    string id, name, surname, nationallity, gender;                 // Create these private variables to recieve basic information of the migrants entering the country for the data system.
    int age, iqPoint, mentalPoint, healthPoint, acculturationPoint; // Create these private variables to calculate person point to use classification of Employees.
    double personPoint;

public:
    Person(); // Default Constructor
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
};
// End of the Person Class' Definition.
#endif