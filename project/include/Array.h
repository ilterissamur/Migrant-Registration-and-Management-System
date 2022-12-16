#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <fstream>
#include "Person.h"
#include "Employee.h"

class Array
{
private:
    int personArraySize, employeeArraySize, personSize, employeeSize, employeeCounter, personCounter;

public:
    Person *personArray{nullptr};
    Employee *employeeArray{nullptr};

    Array(int numberOfPerson, int numberOfEmployee);
    void readArrayData();
    void addPerson(Person &newPerson);
    void addEmployee(Employee &newEmployee);
};

#endif