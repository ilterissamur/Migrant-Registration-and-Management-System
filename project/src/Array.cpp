#include "Array.h"

Array::Array(int numberOfEmployee, int numberOfRefugee)
{
    employeeSize = numberOfEmployee;
    refugeeSize = numberOfRefugee;
    employeeArraySize = numberOfEmployee + 1;
    refugeeArraySize = numberOfRefugee + 1;
    employeeArray = new Employee[employeeArraySize];
    refugeeArray = new Refugee[refugeeArraySize];
}

Array::~Array()
{
    delete[] employeeArray;
    delete[] refugeeArray;
}

void Array::readArrayData()
{
    ifstream myFile1;
    ifstream myFile2;
    myFile1.open("employee.txt", ios::in);
    myFile2.open("refugee.txt", ios::in);

    string tempID, tempName, tempSurname, tempNationallity, tempGender, tempString1, tempString2, tempJob, tempCity, tempCamp;
    int tempAge, tempSalary, tempTax;

    for (size_t i = 0; i < employeeSize; i++)
    {
        myFile1 >> tempID >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempString1 >> tempString2 >> tempCity >> tempSalary >> tempTax;
        tempJob = tempString1 + " " + tempString2;
        employeeArray[i].setEmployeeData(tempID, tempName, tempSurname, tempAge, tempNationallity, tempGender, tempJob, tempCity, tempSalary, tempTax);
    }

    for (size_t i = 0; i < refugeeSize; i++)
    {
        myFile2 >> tempID >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempCamp;
        refugeeArray[i].setRefugeeData(tempID, tempName, tempSurname, tempAge, tempNationallity, tempGender, tempCamp);
    }

    myFile1.close();
    myFile2.close();
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

void Array::calculateBudget()
{
    ofstream myFile;
    myFile.open("budget.txt", ios::out);

    int sum = 0;

    for (size_t i = 0; i < employeeSize; i++)
    {
        sum += employeeArray[i].getTax();
    }

    myFile << sum << endl;

    myFile << refugeeSize * 1000;

    myFile.close();
}

void Array::displayEmployees()
{
    for (size_t i = 0; i < employeeSize; i++)
    {
        cout << employeeArray[i].getID() << " " << employeeArray[i].getName() << " " << employeeArray[i].getSurname() << " " << employeeArray[i].getAge() << " "
             << employeeArray[i].getNationallity() << " " << employeeArray[i].getGender() << " " << employeeArray[i].getJob() << " " << employeeArray[i].getCity() << " "
             << employeeArray[i].getSalary() << endl;
    }
}

void Array::displayRefugees()
{
    for (size_t i = 0; i < refugeeSize; i++)
    {
        cout << refugeeArray[i].getID() << " " << refugeeArray[i].getName() << " " << refugeeArray[i].getSurname() << " " << refugeeArray[i].getAge() << " "
             << refugeeArray[i].getNationallity() << " " << refugeeArray[i].getGender() << " " << refugeeArray[i].getCamp() << endl;
    }
}