#include "Array.h"

Array::Array(int numberOfEmployee, int numberOfRefugee, int numberOfGuilty)
{
    employeeSize = numberOfEmployee;
    refugeeSize = numberOfRefugee;
    guiltySize = numberOfGuilty;
    employeeArraySize = numberOfEmployee + 10;
    refugeeArraySize = numberOfRefugee + 10;
    guiltyArraySize = numberOfGuilty + 10;
    employeeArray = new Employee[employeeArraySize];
    refugeeArray = new Refugee[refugeeArraySize];
    guiltyArray = new Guilty[guiltyArraySize];
}

Array::~Array()
{
    delete[] employeeArray;
    delete[] refugeeArray;
    delete[] guiltyArray;
}

void Array::readArrayData()
{
    ifstream myFile1;
    ifstream myFile2;
    ifstream myFile3;
    myFile1.open("employee.txt", ios::in);
    myFile2.open("refugee.txt", ios::in);
    myFile3.open("guilty.txt", ios::in);

    string tempID, tempName, tempSurname, tempNationallity, tempGender, tempString1, tempString2, tempJob, tempCity, tempCamp, tempCrime, tempPunishment;
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

    for (size_t i = 0; i < guiltySize; i++)
    {
        myFile3 >> tempID >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempString1 >> tempString2 >> tempPunishment;
        tempCrime = tempString1 + " " + tempString2;
        guiltyArray[i].setGuiltyData(tempID, tempName, tempSurname, tempAge, tempNationallity, tempGender, tempCrime, tempPunishment);
    }

    myFile1.close();
    myFile2.close();
    myFile3.close();
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

void Array::addGuilty(Guilty &newGuilty)
{
    if (guiltySize < guiltyArraySize)
    {
        guiltyArray[guiltySize] = newGuilty;
        guiltySize++;
    }
    else
    {
        guiltyArraySize = guiltyArraySize + 10;
        Guilty *temp = new Guilty[guiltyArraySize];

        for (size_t i = 0; i < guiltySize; i++)
        {
            temp[i] = guiltyArray[i];
        }

        temp[guiltySize] = newGuilty;
        guiltySize++;

        delete[] guiltyArray;
        guiltyArray = temp;
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

int Array::getEmployeeSize()
{
    return employeeSize;
}

int Array::getRefugeeSize()
{
    return refugeeSize;
}

void Array::setEmployeeSize(int newSize)
{
    employeeSize = newSize;
}

void Array::setRefugeeSize(int newSize)
{
    refugeeSize = newSize;
}

ostream &operator<<(ostream &printEmployee, Employee &e)
{
    printEmployee << setw(20) << left << e.getID() << setw(20) << left << e.getName() << setw(20) << left << e.getSurname()
                  << setw(20) << left << e.getAge() << setw(20) << left << e.getNationallity() << setw(20) << left << e.getGender()
                  << setw(20) << left << e.getJob() << setw(20) << left << e.getCity() << setw(20) << left << e.getSalary()
                  << setw(20) << left << e.getTax() << endl;

    return printEmployee;
}

ostream &operator<<(ostream &printRefugee, Refugee &r)
{
    printRefugee << setw(20) << left << r.getID() << setw(20) << left << r.getName() << setw(20) << left << r.getSurname()
                 << setw(20) << left << r.getAge() << setw(20) << left << r.getNationallity() << setw(20) << left << r.getGender()
                 << setw(20) << left << r.getCamp() << endl;

    return printRefugee;
}

ostream &operator<<(ostream &printGuilty, Guilty &g)
{
    printGuilty << setw(20) << left << g.getID() << setw(20) << left << g.getName() << setw(20) << left << g.getSurname()
                << setw(20) << left << g.getAge() << setw(20) << left << g.getNationallity() << setw(20) << left << g.getGender()
                << setw(20) << left << g.getCrime() << setw(20) << left << g.getPunishment() << endl;

    return printGuilty;
}

void Array::print(string mode)
{
    if (mode == "Employee")
    {
        cout << setw(20) << left << "ID" << setw(20) << left << "Name" << setw(20) << left << "Surname" << setw(20) << left << "Age"
             << setw(20) << left << "Nationallity" << setw(20) << left << "Gender" << setw(20) << left << "Job" << setw(20) << left << "City"
             << setw(20) << left << "Salary" << setw(20) << left << "Tax" << endl;
        cout << "\n";

        for (size_t i = 0; i < employeeSize; i++)
        {
            cout << employeeArray[i] << endl;
        }
    }
    else if (mode == "Refugee")
    {
        cout << setw(20) << left << "ID" << setw(20) << left << "Name" << setw(20) << left << "Surname" << setw(20) << left << "Age"
             << setw(20) << left << "Nationallity" << setw(20) << left << "Gender" << setw(20) << left << "Camp" << endl;
        cout << "\n";

        for (size_t i = 0; i < refugeeSize; i++)
        {
            cout << refugeeArray[i];
        }
    }
    else
    {
        cout << setw(20) << left << "ID" << setw(20) << left << "Name" << setw(20) << left << "Surname" << setw(20) << left << "Age"
             << setw(20) << left << "Nationallity" << setw(20) << left << "Gender" << setw(20) << left << "Crime" << setw(20) << left << "Punishment" << endl;
        cout << "\n";

        for (size_t i = 0; i < guiltySize; i++)
        {
            cout << guiltyArray[i];
        }
    }
}