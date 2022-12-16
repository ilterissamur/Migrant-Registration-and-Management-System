#include "groupOfEmployees.h"

using namespace std;

GroupOfEmployees::GroupOfEmployees(int numberOfEmployee)
{
    employeeSize = numberOfEmployee;
    arraySize = numberOfEmployee + 10;
    employeeArray = new Employee[arraySize];
}

void GroupOfEmployees::addEmployee(Employee &newEmployee)
{
    if (employeeSize < arraySize)
    {
        employeeArray[employeeSize] = newEmployee;
        employeeSize++;
    }
    else
    {
        arraySize = arraySize + 10;
        Employee *temp = new Employee[arraySize];

        for (size_t i = 0; i < employeeSize; i++)
        {
            temp[i] = employeeArray[i];
        }

        temp[employeeSize] = newEmployee;
        employeeSize++;

        delete[] employeeArray;
        employeeArray = temp;
    }
}