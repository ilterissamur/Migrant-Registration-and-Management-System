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
    migrants arr(size);
    arr.createArrayID();
    arr.readArrayData();
    person person;
    cout << "adas";

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
            person.createPerson();
            arr.addPerson(person);
            person.addFile();
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