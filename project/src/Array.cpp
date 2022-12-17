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
    ifstream myFile1;
    ifstream myFile2;
    ifstream myFile3;
    myFile1.open("data.txt", ios::in);
    myFile2.open("id.txt", ios::in);
    myFile3.open("employee.txt");

    string tempName, tempSurname, tempNationallity, tempGender, tempEducation, tempID, tempJob, tempCity;
    int tempAge, tempSalary;

    for (size_t i = 0; i < personSize; i++)
    {
        myFile1 >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempEducation;
        myFile2 >> tempID;
        personArray[i].setData(tempName, tempSurname, tempAge, tempNationallity, tempGender, tempEducation, tempID);
    }

    for (size_t i = 0; i < employeeSize; i++)
    {
        myFile3 >> tempJob >> tempCity >> tempSalary;
        employeeArray[i].setEmployeeData(tempJob, tempCity, tempSalary);
    }

    myFile1.close();
    myFile2.close();
    myFile3.close();
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