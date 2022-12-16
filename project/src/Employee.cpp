#include "Employee.h"

void Employee::findJob(string grade)
{
    int option;
    string tempString;
    ifstream myFile;

    if (grade == "A")
    {
        salary = 20000;
        tax = salary * 0.2;

        myFile.open("jobA.txt", ios::in);

        while (!myFile.eof())
        {
            int i = 1;
            myFile >> tempString;
            cout << i << "- " << tempString << endl;
            i++;
        }
        cout << "Choose school: ";
        cin >> option;

        for (size_t i = 0; i < option; i++)
        {
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityA.txt", ios::in);

        while (!myFile.eof())
        {
            int i = 1;
            myFile >> tempString;
            cout << i << "- " << tempString;
            i++;
        }
        cout << "Choose city: ";
        cin >> option;

        for (size_t i = 0; i < option; i++)
        {
            myFile >> city;
        }

        myFile.close();
    }
    else if (grade == "B")
    {
        salary = 10000;
        tax = salary * 0.15;

        myFile.open("jobB.txt", ios::in);

        while (!myFile.eof())
        {
            int i = 1;
            myFile >> tempString;
            cout << i << "- " << tempString;
            i++;
        }
        cout << "Choose school: ";
        cin >> option;

        for (size_t i = 0; i < option; i++)
        {
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityB.txt", ios::in);

        while (!myFile.eof())
        {
            int i = 1;
            myFile >> tempString;
            cout << i << "- " << tempString;
            i++;
        }
        cout << "Choose city: ";
        cin >> option;

        for (size_t i = 0; i < option; i++)
        {
            myFile >> city;
        }

        myFile.close();
    }
    else if (grade == "C")
    {
        salary = 5000;
        tax = salary * 0.1;

        myFile.open("jobC.txt", ios::in);

        while (!myFile.eof())
        {
            int i = 1;
            myFile >> tempString;
            cout << i << "- " << tempString;
            i++;
        }
        cout << "Choose school: ";
        cin >> option;

        for (size_t i = 0; i < option; i++)
        {
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityC.txt", ios::in);

        while (!myFile.eof())
        {
            int i = 1;
            myFile >> tempString;
            cout << i << "- " << tempString;
            i++;
        }
        cout << "Choose city: ";
        cin >> option;

        for (size_t i = 0; i < option; i++)
        {
            myFile >> city;
        }

        myFile.close();
    }
}