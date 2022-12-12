#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "time.h"

using namespace std;

int dataSize();
int displayMenu();

class migrant
{
    public:
        string id, name, surname, nationallity, gender, education; // employee(faydalı afganlar) sıgınmacı(yardım alacak olan gavatlar) guilty (bunların hepsi inheritance)
        int age;
    
    public:

    void createMigrant()
    {
        cout << "Enter name:";
            cin >> name;
        cout << "Enter surname: ";
            cin >> surname;
        cout << "Enter age: ";
            cin >> age;      
        cout << "Enter nationallity: ";
            cin >> nationallity;
        cout << "Enter gender: ";
            cin >> gender;
        cout << "Enter education level";
            cin >> education;

        id = createID();    
    }

    string createID()
    {
        int tempID;

        tempID = rand() %9999999 + 1000000000;
        return to_string(tempID);
    }

    void addFile()
    {
        ofstream myFile;
        myFile.open("data.txt", ios::out);

        myFile.close();
    }

};

class migrants
{
    private:
        int arraySize;
        int migrantSize;
        int counter {0};

    public:
        migrant* migrantArray {nullptr};

        migrants(int a)
        {
            migrantSize = a;
            arraySize = a + 10;
            migrantArray = new migrant[arraySize];
        }

        void addMigrant(migrant &migrant1)
        {
            migrantArray[migrantSize] = migrant1;
            migrantSize++;
            counter++;

            if(counter == 10)
            {
                migrant* temp {nullptr};
                temp = new migrant[arraySize+10];

                for(size_t i=0; i<migrantSize; i++)
                {
                    temp[i] = migrantArray[i];
                }

                delete[] migrantArray;
                migrantArray = temp;
            }
        }

    void getData()
    {
        ifstream myFile;
        myFile.open("data.txt" , ios::in);

        for(size_t i=0; i<migrantSize; i++)
        {
            myFile >> migrantArray[i].name;
            myFile >> migrantArray[i].surname;
            myFile >> migrantArray[i].age;
            myFile >> migrantArray[i].nationallity;
            myFile >> migrantArray[i].gender;
            myFile >> migrantArray[i].education;

            if(myFile.eof())
            {
                break;
            }
        }

    }
    

        //eklenecek fonksiyonlar add deport check  
        // add ise yönetime gidecek employee mi sıgınmacı mı olduğu belirlenecek 
        // employee ise boş işlerden iş aranacak ve iş verilecek
        // employee değil ise yardım desteği belirlenecek
};

class admin
{
    private:
        string username, password;

    public:

    admin()
    {
        username = "admin";
        password = "admin123";
    }

    bool login()
    {
        bool control;
        string tempUserName, tempPassword;
        cout << "Username: ";
        cin >> tempUserName;
        cout << "Password: ";
        cin >> tempPassword;
        if(tempPassword == password && tempUserName == username)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int size = dataSize();
    int choice;

    migrant m1;
    migrants arr(size);

    arr.getData();

    /*admin a;
    
    while (!a.login())
    {
        cout << "Invalid login please login again" << endl;
    }*/
    
    
    choice = displayMenu();

    while (choice != 4)
    {
        if(choice == 1)
        {
            cout << "111";
        }
        else if(choice == 2)
        {
            cout <<"222";
        }
        else if(choice == 3)
        {
            cout << "333";
        }

        choice = displayMenu();
    }
    
}

int dataSize()
{
    string tempLine;
    int n {0};

    fstream myFile;
    myFile.open("data.txt", ios::in);

    if(!myFile)
    {
        cout << "file not found";
    }
    else
    {
        while(1)
        {
            getline(myFile, tempLine);
            n++;

            if(myFile.eof())
            {
                break;
            }
        }
    }

    return n;
}

int displayMenu()
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