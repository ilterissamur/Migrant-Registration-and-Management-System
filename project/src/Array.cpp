#include "Array.h"

Array::Array(int numberOfPerson, int numberOfEmployee)
{
    personSize = numberOfPerson;
    employeeSize = numberOfEmployee;
    personArraySize = numberOfPerson + 10;
    employeeArraySize = numberOfEmployee + 10;
    personArray = new Person[personArraySize];
    employeeArray = new Employee[employeeArraySize];
}

void Array::readArrayData()
{
}

void Array::addPerson(Person &newPerson)
{
    if (personSize < personArraySize)
    {
        personArray[personSize] = newPerson;
        personSize++;
    }
    else
    {
        personArraySize = personArraySize + 10;
        Person *temp = new Person[personArraySize];

        for (size_t i = 0; i < personSize; i++)
        {
            temp[i] = personArray[i];
        }

        temp[personSize] = newPerson;
        personSize++;

        delete[] personArray;
        personArray = temp;
    }
}

void Array::addEmployee(Employee &newEmployee)
{
    if (employeeSize < employeeArraySize)
    {
        employeeArray[employeeSize] = newEmployee;
        employeeSize++;
    }
    else
    {
        employeeArraySize = employeeArraySize + 10;
        Employee *temp = new Employee[employeeArraySize];

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