#include "employee.h"

void Employee::findJob(string grade)
{
    int option;
    string tempSchool;
    ifstream myFile;

    if (grade == "A")
    {
        myFile.open("jobA.txt", ios::in);

        salary = 20000;
        tax = salary * 0.2;

        while (myFile.eof())
        {
            int i{1};
            myFile >> tempSchool;
            cout << i << "- " << tempSchool;
            i++;
        }
        cout << "Choose school: ";
        cin >> option;

        for (size_t i = 0; i < option; i++)
        {
            myFile >> job;
        }

        /*
        if (option == 1)
        {
            job = "Health School";
        }
        else if (option == 2)
        {
            job = "Medicine School";
        }
        else if (option == 3)
        {
            job = "Software School";
        }
        */

        cout << "1- Ankara" << endl;
        cout << "2- Istanbul" << endl;
        cout << "3- Izmir" << endl;
        cout << "4- Antalya" << endl;
        cout << "5- Bursa" << endl;
        cout << "Choose city: ";
        cin >> option;

        if (option == 1)
        {
            city = "Ankara";
        }
        else if (option == 2)
        {
            city = "Istanbul";
        }
        else if (option == 3)
        {
            job = "Izmir";
        }
        else if (option == 4)
        {
            city = "Antalya";
        }
        else if (option == 5)
        {
            city = "Bursa";
        }
    }
    else if (grade == "B")
    {
        myFile.open("jobB.txt", ios::in);

        salary = 10000;
        tax = salary * 0.15;

        while (myFile.eof())
        {
            int i{1};
            myFile >> tempSchool;
            cout << i << "- " << tempSchool;
            i++;
        }
        cout << "Choose school: ";
        cin >> option;

        if (option == 1)
        {
            job = "Cooker School";
        }
        else if (option == 2)
        {
            job = "Barber School";
        }
        else if (option == 3)
        {
            job = "Carpenter School";
        }

        cout << "1- Konya" << endl;
        cout << "2- Trabzon" << endl;
        cout << "3- Edirne" << endl;
        cout << "4- Adana" << endl;
        cout << "5- Afyonkarahisar" << endl;
        cout << "Choose city: ";
        cin >> option;

        if (option == 1)
        {
            city = "Konya";
        }
        else if (option == 2)
        {
            city = "Trabzon";
        }
        else if (option == 3)
        {
            job = "Edirne";
        }
        else if (option == 4)
        {
            city = "Adana";
        }
        else if (option == 5)
        {
            city = "Afyonkarahisar";
        }
    }
    else if (grade == "C")
    {
        myFile.open("jobC.txt", ios::in);

        salary = 5000;
        tax = salary * 0.10;

        while (myFile.eof())
        {
            int i{1};
            myFile >> tempSchool;
            cout << i << "- " << tempSchool;
            i++;
        }
        cout << "Choose school: ";
        cin >> option;

        if (option == 1)
        {
            job = "Garson School";
        }
        else if (option == 2)
        {
            job = "Dyer School";
        }
        else if (option == 3)
        {
            job = "Builder School";
        }

        cout << "1- Mardin" << endl;
        cout << "2- Mersin" << endl;
        cout << "3- Sivas" << endl;
        cout << "4- Artvin" << endl;
        cout << "5- Zonguldak" << endl;
        cout << "Choose city: ";
        cin >> option;

        if (option == 1)
        {
            city = "Mardin";
        }
        else if (option == 2)
        {
            city = "Mersin";
        }
        else if (option == 3)
        {
            job = "Sivas";
        }
        else if (option == 4)
        {
            city = "Artvin";
        }
        else if (option == 5)
        {
            city = "Zonguldak";
        }
    }
}
