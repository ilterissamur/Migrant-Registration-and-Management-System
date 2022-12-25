#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Person.h"
#include "Employee.h"
#include "Refugee.h"
#include "Guilty.h"

class Array
{
private:
    int refugeeArraySize, employeeArraySize, guiltyArraySize, refugeeSize, employeeSize, guiltySize;

public:
    Refugee *refugeeArray{nullptr};
    Employee *employeeArray{nullptr};
    Guilty *guiltyArray{nullptr};

    Array(int numberOfRefugee, int numberOfEmployee, int numberOfGuilty);
    ~Array();
    void readArrayData();
    void addEmployee(Employee &newEmployee);
    void addRefugee(Refugee &newRefugee);
    void addGuilty(Guilty &newGuilty);
    void calculateBudget();
    int getEmployeeSize();
    int getRefugeeSize();
    void setEmployeeSize(int newSize);
    void setRefugeeSize(int newSize);
    void print(string mode);
    friend ostream &operator<<(ostream &printEmployee, Employee &e);
    friend ostream &operator<<(ostream &printRefugee, Refugee &r);
    friend ostream &operator<<(ostream &printGuilty, Guilty &g);
};

#endif