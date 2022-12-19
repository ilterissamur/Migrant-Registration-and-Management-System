#include "Employee.h"

void Employee::findJob(string grade)
{
    int option, j = 0;
    string tempString1, tempString2;
    ifstream myFile1, myFile2;

    if (grade == "A")
    {
        salary = 20000;
        tax = salary * 0.2;

        myFile1.open("job.txt", ios::in);
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
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
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2;

        myFile1.close();
        myFile2.close();
    }
    else if (grade == "B")
    {
        salary = 15000;
        tax = salary * 0.15;

        j = 0;
        myFile1.open("job.txt", ios::in);
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            myFile2 >> tempString1 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
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
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2;

        myFile1.close();
        myFile2.close();
    }
    else if (grade == "C")
    {
        salary = 5000;
        tax = salary * 0.1;

        j = 0;
        myFile1.open("job.txt", ios::in);
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 10; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            myFile2 >> tempString1 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
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
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2;

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