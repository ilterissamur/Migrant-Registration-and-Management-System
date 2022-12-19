#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <fstream>
#include "Person.h"
#include "Employee.h"
#include "Refugee.h"

class Array
{
private:
    int refugeeArraySize, employeeArraySize, refugeeSize, employeeSize;

public:
    Refugee *refugeeArray{nullptr};
    Employee *employeeArray{nullptr};

    Array(int numberOfRefugee, int numberOfEmployee);
    void readArrayData();
    void addRefugee(Refugee &newRefugee);
    void addEmployee(Employee &newEmployee);
    void calculateBudget();
};

#endif