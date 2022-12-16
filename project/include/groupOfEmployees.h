#ifndef GROUP_OF_EMPLOYEES_H
#define GROUP_OF_EMPLOYEES_H

#include <iostream>
#include <fstream>
#include "employee.h"

class groupOfEmployees
{
private:
    int arraySize, employeeSize, counter{0};

public:
    employee *employeeArray{nullptr};

    groupOfEmployees(int a);
    void addEmployee(employee &newEmployee);
    void readArrayData(); // yazılacak
};

#endif