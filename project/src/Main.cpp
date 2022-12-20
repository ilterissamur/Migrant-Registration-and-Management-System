#include <iostream>
#include "Array.h"
#include "Person.h"
#include "Employee.h"
#include "Refugee.h"
#include "Functions.h"
#include "Admin.h"
#include "Color.h"

using namespace std;

int main()
{
    /*
    srand(time(NULL));

    ifstream myFile1, myFile2;
    int size1, size2, choice;

    size1 = dataSize("data.txt", myFile1);
    size2 = dataSize("employee.txt", myFile2);

    Array myArray(size1, size2);
    myArray.readArrayData();

        myFile1.open("campAntep.txt", ios::in);
        size1 = dataSize("campAntep.txt", myFile1);
        Camp campAntep(size1);
        myFile1.close();

        myFile1.open("campHatay.txt", ios::in);
        size1 = dataSize("campHatay.txt", myFile1);
        Camp campHatay(size1);
        myFile1.close();

        myFile1.open("campKilis.txt", ios::in);
        size1 = dataSize("campKilis.txt", myFile1);
        Camp campKilis(size1);
        myFile1.close();

    Person p;
    Color c;

    int cs1, cs2, cs3;

    /cs1 = campAntep.getRefugeesize();
    cs2 = campHatay.getRefugeesize();
    cs3 = campKilis.getRefugeesize();

    c.printDefault("DENEME");
    c.printBlack("DENEME");
    c.printDarkRed("DENEME");
    c.printDarkGreen("DENEME");
    c.printDarkYellow("DENEME");
    c.printDarkBlue("DENEME");
    c.printDarkMagenta("DENEME");
    c.printDarkCyan("DENEME");
    c.printLightGray("DENEME");
    c.printDarkGray("DENEME");
    c.printRed("DENEME");
    c.printGreen("DENEME");
    c.printOrange("DENEME");
    c.printBlue("DENEME");
    c.printMagenta("DENEME");
    c.printCyan("DENEME");
    c.printWhite("DENEME");

    admin a;

    while (!a.login())
    {
        cout << "Invalid login please login again" << endl;
    }

    choice = displayMenu();
    while (choice != 4)
    {
        if (choice == 1)
        {
            ofstream campFile;

            p.createPerson();
            myArray.addPerson(p);
            p.addFile();
            int control = p.filter(p);

            if (control == 0 || control == -1 || control == -2)
            {
                if (control == 0)
                {
                    cout << "Child can't work" << endl;
                }
                else if (control == -1)
                {
                    cout << "Person's point is too low for working our country" << endl;
                }
                else if (control == -2)
                {
                    cout << "Person's age is too old for working our country" << endl;
                }

                Refugee r(p);

                int campChoose = r.setCamp(cs1, cs2, cs3);

                if (campChoose == 1)
                {
                    r.addCampFile("campAntep.txt", campFile);
                }
                if (campChoose == 2)
                {
                    r.addCampFile("campHatay.txt", campFile);
                }
                if (campChoose == 3)
                {
                    r.addCampFile("campKilis.txt", campFile);
                }
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
    */
}