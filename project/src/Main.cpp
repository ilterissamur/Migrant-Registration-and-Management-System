#include <iostream>
#include "Person.h"
#include "Array.h"
#include "Admin.h"
#include "Functions.h"
#include "Refugee.h"

using namespace std;

int main()
{
    srand(time(NULL));

    fstream myFile1, myFile2;
    int size1, size2, choice;

    size1 = dataSize("data.txt", myFile1);
    size2 = dataSize("employee.txt", myFile2);
    myFile1.close();
    myFile2.close();

    Array myArray(size1, size2);
    myArray.readArrayData();

    Person p;

    /*admin a;

    while (!a.login())
    {
        cout << "Invalid login please login again" << endl;
    }*/

    choice = displayMenu();
    while (choice != 4)
    {
        if (choice == 1)
        {
            p.createPerson();
            myArray.addPerson(p);
            p.addFile();
            int control = p.filter(p);

            if (control == 0)
            {
                cout << "Child can't work" << endl;
                Refugee r(p);
            }
            else if (control == -1)
            {
                cout << "Person's point is too low for working our country" << endl;
                Refugee r(p);
            }
            else if (control == -2)
            {
                cout << "Person's age is too old for working our country" << endl;
                Refugee r(p);
            }
            else if (control == 3)
            {
                Employee e(p);
                e.findJob("A");
                myArray.addEmployee(e);
                e.addEmployeeFile();
            }
            else if (control == 2)
            {
                Employee e(p);
                e.findJob("B");
                myArray.addEmployee(e);
                e.addEmployeeFile();
            }
            else if (control == 1)
            {
                Employee e(p);
                e.findJob("C");
                myArray.addEmployee(e);
                e.addEmployeeFile();
            }
        }
        else if (choice == 2)
        {
            cout << "222";
        }
        else if (choice == 3)
        {
            cout << "333";
        }

        choice = displayMenu();
    }
}