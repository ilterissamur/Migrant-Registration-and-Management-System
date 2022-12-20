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
    ~Array();
    void readArrayData();
    void addEmployee(Employee &newEmployee);
    void addRefugee(Refugee &newRefugee);
    void calculateBudget();
    void displayEmployees();
    void displayRefugees();
};

#endif