#include <iostream>
#include "Array.h"
#include "Functions.h"
#include "Admin.h"
#include "Color.h"

using namespace std;

int main()
{
    srand(time(NULL));

    ifstream myFile1, myFile2, myFile3;
    int size1, size2, size3, choice, budget, usingBudget;

    size1 = calculateDataSize("employee.txt", myFile1) - 1;
    size2 = calculateDataSize("refugee.txt", myFile2) - 1;
    size3 = calculateDataSize("guilty.txt", myFile3) - 1;
    Array myArray(size1, size2, size3);
    myArray.readArrayData();

    myArray.calculateBudget();

    myFile1.open("budget.txt", ios::in);
    myFile1 >> budget;
    myFile1 >> usingBudget;
    myFile1.close();

    Person person;
    Color color;
    Admin admin;

    while (!admin.login())
    {
        cout << "Invalid login, please login again" << endl;
    }

    choice = displayMenu();

    while (choice != 4)
    {
        if (choice == 1)
        {
            person.createPerson();

            int control = person.filter(person);

            if (control == 3)
            {
                cout << "Person point: " << person.getPoint() << ", "
                     << "Person takes A grade from job classification" << endl;
                Employee employee(person);
                employee.findJob("A");
                myArray.addEmployee(employee);
                employee.addEmployeeFile();
                budget += employee.getTax();
            }
            else if (control == 2)
            {
                cout << "Person point: " << person.getPoint() << ", "
                     << "Person takes B grade from job classification" << endl;
                Employee employee(person);
                employee.findJob("B");
                myArray.addEmployee(employee);
                employee.addEmployeeFile();
                budget += employee.getTax();
            }
            else if (control == 1)
            {
                cout << "Person point: " << person.getPoint() << ", "
                     << "Person takes C grade from job classification" << endl;
                Employee employee(person);
                employee.findJob("C");
                myArray.addEmployee(employee);
                employee.addEmployeeFile();
                budget += employee.getTax();
            }
            else if (control == -1)
            {
                cout << "Person's age is too young for working our country" << endl;
                if ((budget - usingBudget) / 1000 < 1)
                {
                    cout << "There is no bugdet to add refugee to camp. Add new employee or stop adding refugees" << endl;
                    break;
                }
                Refugee refugee(person);
                cout << "Remaining refugee capacity: " << int((budget - usingBudget) / 1000) << endl;
                refugee.setCamp();
                myArray.addRefugee(refugee);
                refugee.addRefugeeFile();
                usingBudget += 1000;
            }
            else if (control = -2)
            {
                cout << "Person's age is too old for working our country" << endl;
                if ((budget - usingBudget) / 1000 < 1)
                {
                    cout << "There is no bugdet to add refugee to camp. Add new employee or stop adding refugees" << endl;
                    break;
                }
                Refugee refugee(person);
                cout << "Remaining refugee capacity: " << int((budget - usingBudget) / 1000) << endl;
                refugee.setCamp();
                myArray.addRefugee(refugee);
                refugee.addRefugeeFile();
                usingBudget += 1000;
            }
            else if (control == -3)
            {
                cout << "Person point: " << person.getPoint() << ", "
                     << "Person's point is too low for working our country" << endl;
                if ((budget - usingBudget) / 1000 < 1)
                {
                    cout << "There is no bugdet to add refugee to camp. Add new employee or stop adding refugees" << endl;
                }
                Refugee refugee(person);
                cout << "Remaining refugee capacity: " << int((budget - usingBudget) / 1000) << endl;
                refugee.setCamp();
                myArray.addRefugee(refugee);
                refugee.addRefugeeFile();
                usingBudget += 1000;
            }
        }
        else if (choice == 2)
        {
            cout << "22222" << endl;
        }
        else if (choice == 3)
        {
            cout << "33333" << endl;
        }

        choice = displayMenu();
    }

    ofstream myFile4;
    myFile4.open("budget.txt", ios::out);
    myFile4 << budget << endl;
    myFile4 << usingBudget;
    myFile4.close();
}