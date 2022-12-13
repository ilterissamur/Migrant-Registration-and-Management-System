#include "displayMenu.h"

int displayMenu()// menu displyleme
{
    int selection;

    cout << "-- Welcome to Migrant Registration and Management System ---" << endl;
    cout << " -Registration:" << endl;
    cout << "   1-Add Migrant" << endl;
    cout << " -Management:" << endl;
    cout << "   2-Display Migrants" << endl;
    cout << "   3-Guilty Dedection" << endl;
    cout << "\n";
    cout << "   4- Exit" << endl;
    
    cout << " Choose your selection: ";
        cin >> selection;

    if(selection != 1 && selection != 2 && selection != 3 && selection != 4)
    {
        while(selection != 1 && selection != 2 && selection != 3 && selection != 4)
        {
            cout << "Wrong choice please rechoice again: ";
                cin >> selection;
        }
    }

    return selection;
}