#include "Functions.h"

int displayMenu() // Displays menu in main
{
    int selection;

    cout << "---------- Welcome to Migrant Registration and Management System ----------" << endl;
    cout << " Registration:" << endl;
    cout << "   1- Add Migrant" << endl;
    cout << "\n Management:" << endl;
    cout << "   2- Guilty Report" << endl;
    cout << "   3- Display Migrants" << endl;
    cout << "\n";
    cout << "   4- Exit" << endl;

    cout << " Choose your selection: ";
    cin >> selection;

    while (selection != 1 && selection != 2 && selection != 3 && selection != 4)
    {
        cout << "Wrong choice, please rechoice again: ";
        cin >> selection;
    }

    return selection;
}

int calculateDataSize(string fileName, ifstream &myFile) // Returns migrants number (line number).
{
    string tempLine;
    int n{0};

    myFile.open(fileName, ios::in);

    if (!myFile)
    {
        cout << "file not found";
    }
    else
    {
        while (1)
        {
            getline(myFile, tempLine);
            n++;

            if (myFile.eof())
            {
                myFile.close();
                break;
            }
        }
    }

    return n;
}