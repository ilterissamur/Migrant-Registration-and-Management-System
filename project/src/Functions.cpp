#include "Functions.h"

int displayMenu() // displays menu in main
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

    while (selection != 1 && selection != 2 && selection != 3 && selection != 4)
    {
        cout << "Wrong choice please rechoice again: ";
        cin >> selection;
    }

    return selection;
}

int dataSize(string fileName, fstream &myFile) // returns person number (line number) in data.txt
{
    string tempLine;
    int n{0};

    myFile.open("data.txt", ios::in);

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

void calculateBudget()
{
    ifstream myfile1;
    ofstream myfile2;

   string tempId, tempCity, tempJob;
   int tempSalary;
   double budget{0};
    
    myfile1.open("employee.txt",ios::in);
    
    if (!myfile1)
    {
        cout << "file not found";
    }
    else 
    {
        while(myfile1.eof())
        {
            myfile1>>tempId>>tempJob>>tempCity>>tempSalary;
            budget += tempSalary;

        }
    }

    myfile1.close();

    myfile2.open("budget.txt",ios::out);
    if (!myfile2)
    {
        cout << "file not found";
    }
    else 
    {
        while(myfile2.eof())
        {
            myfile2<< budget;
        }
    }
    
    myfile2<< budget;
    myfile2.close();
    
}