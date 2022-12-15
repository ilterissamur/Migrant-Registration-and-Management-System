#include "person.h"
#include "migrants.h"
#include "admin.h"
#include "functions.h"

using namespace std;

int main()
{
    srand(time(NULL));

    int size = dataSize();
    int choice;

    person person;
    migrants arr(size);

    /*admin a;

    while (!a.login())
    {
        cout << "Invalid login please login again" << endl;
    }*/

    system("cls");

    arr.createArrayID();

    for (size_t i = 0; i < 6; i++)
    {
        cout << arr.personArray[i].getID() << endl;
    }

    choice = displayMenu();

    while (choice != 4)
    {
        if (choice == 1)
        {
            arr.readArrayData();
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

        system("cls");
        choice = displayMenu();
    }
}