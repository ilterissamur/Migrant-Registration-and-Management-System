#include "Employee.h"

void Employee::findJob(string grade)
{
    int option;
    string tempString;
    ifstream myFile;
    int i = 0;
    if (grade == "A")
    {
        salary = 20000;
        tax = salary * 0.2;

        myFile.open("jobA.txt", ios::in);

        while (!myFile.eof())
        {

            myFile >> tempString;
            cout << ++i << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option <= 0 || option > 3)
        {
            cout << "You entered invalid choice!! Please again enter your choosing: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityA.txt", ios::in);

        i = 0;
        while (!myFile.eof())
        {

            myFile >> tempString;
            cout << ++i << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;

        while (option <= 0 || option > 3)
        {
            cout << "You entered invalid choice!! Please again enter your choosing: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile >> city;
        }

        myFile.close();
    }
    else if (grade == "B")
    {
        salary = 10000;
        tax = salary * 0.2;

        myFile.open("jobB.txt", ios::in);
        i = 0;
        while (!myFile.eof())
        {

            myFile >> tempString;
            cout << ++i << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option <= 0 || option > 3)
        {
            cout << "You entered invalid choice!! Please again enter your choosing: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityB.txt", ios::in);

        i = 0;
        while (!myFile.eof())
        {

            myFile >> tempString;
            cout << ++i << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option <= 0 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choosing: ";
            cin >> option;
        }
        for (size_t i = 0; i < option; i++)
        {
            myFile >> city;
        }

        myFile.close();
    }
    else if (grade == "C")
    {
        salary = 5000;
        tax = salary * 0.2;

        myFile.open("jobC.txt", ios::in);

        i = 0;
        while (!myFile.eof())
        {

            myFile >> tempString;
            cout << ++i << "- " << tempString << endl;
        }
        cout << "Choose school: ";
        cin >> option;

        while (option <= 0 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choosing: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile >> job;
        }

        myFile.close();

        myFile.open("cityC.txt", ios::in);

        i = 0;
        while (!myFile.eof())
        {

            myFile >> tempString;
            cout << ++i << "- " << tempString << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option <= 0 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choosing: ";
            cin >> option;
        }
        for (size_t i = 0; i < option; i++)
        {
            myFile >> city;
        }

        myFile.close();
    }
}