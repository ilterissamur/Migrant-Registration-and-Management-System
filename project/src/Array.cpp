#include "Array.h"

Array::Array(int numberOfRefugee, int numberOfEmployee)
{
    refugeeSize = numberOfRefugee;
    employeeSize = numberOfEmployee;
    refugeeArraySize = numberOfRefugee + 10;
    employeeArraySize = numberOfEmployee + 10;
    refugeeArray = new Refugee[refugeeArraySize];
    employeeArray = new Employee[employeeArraySize];
}

void Array::readArrayData()
{
    ifstream myFile1;
    ifstream myFile2;
    myFile1.open("employee.txt", ios::in);
    myFile2.open("refugee.txt", ios::in);

    string tempID, tempName, tempSurname, tempNationallity, tempGender, tempJob, tempCity;
    int tempAge, tempSalary;

    /*for (size_t i = 0; i < refugeeSize; i++)
    {
        myFile1 >> tempID >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempJob >> tempCity >> tempSalary;
        refugeeArray[i].setData(tempName, tempSurname, tempAge, tempNationallity, tempGender, tempID);
    }

    for (size_t i = 0; i < employeeSize; i++)
    {
        myFile3 >> tempJob >> tempCity >> tempSalary;
        employeeArray[i].setEmployeeData(tempJob, tempCity, tempSalary);
    }*/

    myFile1.close();
    myFile2.close();
}

void Array::addRefugee(Refugee &newRefugee)
{
    if (refugeeSize < refugeeArraySize)
    {
        refugeeArray[refugeeSize] = newRefugee;
        refugeeSize++;
    }
    else
    {
        refugeeArraySize = refugeeArraySize + 10;
        Refugee *temp = new Refugee[refugeeArraySize];

        for (size_t i = 0; i < refugeeSize; i++)
        {
            temp[i] = refugeeArray[i];
        }

        temp[refugeeSize] = newRefugee;
        refugeeSize++;

        delete[] refugeeArray;
        refugeeArray = temp;
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

void Array::calculateBudget()
{
    ofstream myFile;
    myFile.open("budget.txt", ios::out);
    double sum = 0;

    for (size_t i = 0; i < employeeSize; i++)
    {
        sum += employeeArray[i].getTax();
    }

    myFile << sum;

    myFile.close();
}