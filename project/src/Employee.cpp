#include "Employee.h"

void Employee::findJob(string grade)
{
    int option, j = 0;
    string tempString;
    ifstream myFile;
    if (grade == "A")
    {
        salary = 20000;
        tax = salary * 0.2;

        myFile.open("jobA.txt", ios::in);

        while (!myFile.eof())
        {
            myFile >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option <= 0 || option > 3)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        myFile.close();
        myFile.open("jobA.txt", ios::in);

        for (size_t i = 0; i < option; i++)
        {
            cout << "for loop" << endl;
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityA.txt", ios::in);

        j = 0;
        while (!myFile.eof())
        {
            myFile >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;

        while (option <= 0 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            cout << "for loop" << endl;
            myFile >> city;
        }

        myFile.close();
    }
    else if (grade == "B")
    {
        salary = 10000;
        tax = salary * 0.15;

        myFile.open("jobB.txt", ios::in);
        j = 0;
        while (!myFile.eof())
        {
            myFile >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option <= 0 || option > 3)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            cout << "for loop" << endl;
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityB.txt", ios::in);

        j = 0;
        while (!myFile.eof())
        {
            myFile >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option <= 0 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }
        for (size_t i = 0; i < option; i++)
        {
            cout << "for loop" << endl;
            myFile >> city;
        }

        myFile.close();
    }
    else if (grade == "C")
    {
        string tempJob, tempCity = "aaaa";
        salary = 5000;
        tax = salary * 0.1;

        myFile.open("jobC.txt", ios::in);

        j = 0;
        while (!myFile.eof())
        {
            myFile >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option <= 0 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            cout << "for loop" << endl;
            myFile >> tempJob;
        }

        job = tempJob;

        myFile.close();

        myFile.open("cityC.txt", ios::in);

        j = 0;
        while (!myFile.eof())
        {
            myFile >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option <= 0 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }
        for (size_t i = 0; i < option; i++)
        {
            cout << "for loop" << endl;
            myFile >> tempCity;
        }

        myFile.close();
    }
}

void Employee::addEmployeeFile()
{
    ofstream myFile;
    myFile.open("employee.txt", ios::app);

    myFile << id << " " << job << " " << city << " " << salary << endl;

    myFile.close();
}

void Employee::setEmployeeData(string job, string city, int salary)
{
    this->job = job;
    this->city = city;
    this->salary = salary;
}

Employee::Employee(Person &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getNationallity();
    id = source.getID();
}

Employee::Employee()
{
}

double Employee::getTax()
{
    return tax;
}