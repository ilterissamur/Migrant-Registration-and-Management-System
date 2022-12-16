#include <iostream>
#include "person.h"
#include "migrants.h"
#include "admin.h"
#include "functions.h"
#include "employee.h"

using namespace std;

int main()
{
    srand(time(NULL));

    int size, choice;
    size = dataSize();
    Migrants arr(size);
    arr.createArrayID();
    arr.readArrayData();
    Person p;
    Employee e;

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
            arr.addPerson(p);
            p.addFile();
            int control = p.filter(p);
            if (control == 0)
            {
                cout << "Child can't work" << endl;
            }
            else if (control == -1)
            {
                cout << "Person's point is too low for working our country" << endl;
            }
            else if (control == 3)
            {
                e.findJob("A");
            }
            else if (control == 2)
            {
                e.findJob("B");
            }
            else if (control == 1)
            {
                e.findJob("C");
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