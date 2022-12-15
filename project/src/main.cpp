#include <iostream>
#include "person.h"
#include "migrants.h"
#include "admin.h"
#include "displayMenu.h"
#include "dataSize.h"

using namespace std;

int main()
{
    int size = dataSize();
    int choice;
    double budget;

    person m1;
    migrants arr(size);

    /*admin a;

    while (!a.login())
    {
        cout << "Invalid login please login again" << endl;
    }*/

    system("cls");

    arr.createArrayID();

    choice = displayMenu();

    while (choice != 4)
    {
        if (choice == 1)
        {
            arr.readArrayData();
            m1.createPerson();
            arr.addPerson(m1);
            m1.addFile();
            // cout << "111";
        }
        else if (choice == 2)
        {
            cout << "222";
        }
        else if (choice == 3)
        {
            cout << "333";
        }

        system("cls");
        choice = displayMenu();
    }
}

// child classlar hariç yapıalcaklar
// menu yönlendirilmesi (child classlar hariç)
// migrantların idsini oluşturma ve dataya ekleme
// olan özelliklerle display function