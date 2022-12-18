#include "Employee.h"

void Employee::findJob(string grade)
{
    int option, j = 0;
    string tempString;
    ifstream myFile1, myFile2;

    if (grade == "A")
    {
        salary = 20000;
        tax = salary * 0.2;

        myFile1.open("jobA.txt", ios::in);
        myFile2.open("jobA.txt", ios::in);

        while (!myFile1.eof())
        {
            myFile1 >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option < 1 || option > 3)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> job;
        }

        myFile1.close();
        myFile2.close();

        myFile1.open("cityA.txt", ios::in);
        myFile2.open("cityA.txt", ios::in);

        j = 0;
        while (!myFile1.eof())
        {
            myFile1 >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;

        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> city;
        }

        myFile1.close();
        myFile2.close();
    }
    else if (grade == "B")
    {
        salary = 10000;
        tax = salary * 0.15;
        j = 0;

        myFile1.open("jobB.txt", ios::in);
        myFile2.open("jobB.txt", ios::in);

        while (!myFile1.eof())
        {
            myFile1 >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option < 1 || option > 3)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> job;
        }

        myFile1.close();
        myFile2.close();

        myFile1.open("cityB.txt", ios::in);
        myFile2.open("cityB.txt", ios::in);

        j = 0;
        while (!myFile1.eof())
        {
            myFile1 >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;

        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }
        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> city;
        }

        myFile1.close();
        myFile2.close();
    }
    else if (grade == "C")
    {
        salary = 5000;
        tax = salary * 0.1;
        j = 0;

        myFile1.open("jobC.txt", ios::in);
        myFile2.open("jobC.txt", ios::in);

        while (!myFile1.eof())
        {
            myFile1 >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> job;
        }

        myFile1.close();
        myFile2.close();

        myFile1.open("cityC.txt", ios::in);
        myFile2.open("cityC.txt", ios::in);

        j = 0;
        while (!myFile1.eof())
        {
            myFile1 >> tempString;
            cout << ++j << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;

        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }
        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> city;
        }

        myFile1.close();
        myFile2.close();
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