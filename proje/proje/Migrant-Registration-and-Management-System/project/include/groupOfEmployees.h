#ifndef GROUP_OF_EMPLOYEES_H
#define GROUP_OF_EMPLOYEES_H

#include <iostream>
#include <fstream>
#include "employee.h"

class GroupOfEmployees
{
private:
    int arraySize, employeeSize, counter{0};

public:
    Employee *employeeArray{nullptr};

    GroupOfEmployees(int a);
    void addEmployee(Employee &newEmployee);
    void readArrayData(); // yazılacak
};

#endif