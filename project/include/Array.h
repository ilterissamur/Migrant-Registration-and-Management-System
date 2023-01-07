#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip> // Declare of <iomanip> to use setw() function when we print data.
#include <fstream> // Declare of <fstream> to read and write process from the txt file.
#include "Person.h"
#include "Employee.h" // Declare of Employee.h to Composition.
#include "Refugee.h"  // Declare of Refugee.h to Composition.
#include "Guilty.h"   // Declare of Guilty.h to Composition.

// Start Array Class' Definition.
class Array
{
private:
    int refugeeArraySize, employeeArraySize, guiltyArraySize, refugeeSize, employeeSize, guiltySize; // Arrays's size and declare migrants size.

public:
    Refugee *refugeeArray{nullptr};   // Refugee's Array
    Employee *employeeArray{nullptr}; // Employee's Array
    Guilty *guiltyArray{nullptr};     // Guilty's Array

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
// End of the Array Class' Definiton.
#endif