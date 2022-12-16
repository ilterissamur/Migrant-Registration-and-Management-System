#include "groupOfEmployees.h"

using namespace std;

groupOfEmployees::groupOfEmployees(int numberOfEmployee)
{
    employeeSize = numberOfEmployee;
    arraySize = numberOfEmployee + 10;
    employeeArray = new employee[arraySize];
}

void groupOfEmployees::addEmployee(employee &newEmployee)
{
    if (employeeSize < arraySize)
    {
        employeeArray[employeeSize] = newEmployee;
        employeeSize++;
    }
    else
    {
        arraySize = arraySize + 10;
        employee *temp = new employee[arraySize];

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