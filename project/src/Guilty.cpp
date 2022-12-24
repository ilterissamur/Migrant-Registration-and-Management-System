#include "Guilty.h"

Guilty::Guilty()
{
}

Guilty::Guilty(Employee &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getGender();
    id = source.getID();
}

Guilty::Guilty(Refugee &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getGender();
    id = source.getID();
}

void Guilty::setCrime(int migrantType)
{
    /*
    ifstream myFile1;
    ifstream myFile2;

    myFile1.open("crime.txt", ios::in);
    myFile2.open("crime.txt", ios::in);

    string tempString1, tempString2;
    int j = 0, option;

    if (migrantType == 1)
    {

        for (size_t i = 0; i < 9; i++)
        {
            getline(myFile1, tempString1);
            cout << ++j << "- " << tempString1 << endl;
            myFile1.ignore();
            tempString1.clear();
        }

        myFile1.close();

        cout << "Choose crime: ";
        cin >> option;

        while (option < 1 || option > 9)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            getline(myFile2, tempString2);
            tempString2.clear();
            myFile2.ignore();
        }

        myFile2.close();

        cout << crime;
        crime = tempString2;
    }
    else
    {
        for (size_t i = 0; i < 7; i++)
        {
            getline(myFile1, tempString1);
            cout << ++j << "- " << tempString1 << endl;
            myFile1.ignore();
            tempString1.clear();
        }

        cout << "Choose crime: ";
        cin >> option;

        while (option < 1 || option > 7)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }
    }

    for (size_t i = 0; i < option; i++)
    {
        getline(myFile2, tempString2);
        myFile2.ignore();
    }

    crime = tempString2;
    cout << crime;
    */

    int option, j = 0;

    cout << ++j << "- Making Robbery" << endl;
    cout << ++j << "- Commit Murder" << endl;
    cout << ++j << "- Terror Activity" << endl;
    cout << ++j << "- Drug Dealing" << endl;
    cout << ++j << "- Disturb Environment" << endl;
    cout << ++j << "- Injured Fight" << endl;
    if (migrantType == 1)
    {
        cout << ++j << "- Tax Evasion" << endl;
        cout << ++j << "- Money Laundering" << endl;

        cout << "Choose crime type: ";
        cin >> option;

        while (option < 1 || option > 8)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }
    }
    else
    {
        cout << "Choose crime type: ";
        cin >> option;

        while (option < 1 || option > 6)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }
    }

    if (option == 1)
    {
        crime = "Making Robbery";
    }
    else if (option == 2)
    {
        crime = "Commit Murder";
    }
    else if (option == 3)
    {
        crime = "Terror Activity";
    }
    else if (option == 4)
    {
        crime = "Drug Dealing";
    }
    else if (option == 5)
    {
        crime = "Disturb Environment";
    }
    else if (option == 6)
    {
        crime = "Injured Fight";
    }
    else if (option == 7)
    {
        crime = "Tax Evasion";
    }
    else if (option == 8)
    {
        crime = "Money Laundering";
    }
}

void Guilty::setGuiltyData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &crime, const string &punishment)
{
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->crime = crime;
    this->punishment = punishment;
}

void Guilty::setPunishment(int migrantType)
{
    if (migrantType == 1)
    {
        if (crime == "Making Robbery" || crime == "Injured Fight" || crime == "Tax Evasion" || crime == "Money Laundering")
        {
            punishment = "Deport";

            if (crime == "Tax Evasion" || crime == "Money Laundering")
            {
                punishment = "Deport+Penalty";
            }
        }
        else if (crime == "Commit Murder" || crime == "Terror Activity" || crime == "Drug Dealing")
        {
            punishment = "Arrest";
        }
        else
        {
            punishment = "Penalty";
        }
    }
    else
    {
        if (crime == "Commit Murder" || crime == "Terror Activity" || crime == "Drug Dealing" || crime == "Disturb Environment")
        {
            punishment = "Arrest";
        }
        else
        {
            punishment = "Deport";
        }
    }
}

void Guilty::applyPunsihment(int migrantType, int &budget, int &usingBudget, Employee *employeeArray, Refugee *refugeeArray, int &employeeSize, int &refugeeSize, int index)
{
    ofstream myFile1;

    if (punishment == "Deport" || punishment == "Arrest" || punishment == "Deport+Penalty")
    {
        if (migrantType == 1)
        {
            budget -= employeeArray[index].getTax();

            if (punishment == "Deport+Penalty")
            {
                budget += 50000;
            }

            for (size_t i = index; i < employeeSize - 1; i++)
            {
                employeeArray[i] = employeeArray[i + 1];
            }
            employeeSize--;

            myFile1.open("employee.txt", ios::out);

            for (size_t i = 0; i < employeeSize; i++)
            {
                myFile1 << employeeArray[i].getID() << " " << employeeArray[i].getName() << " " << employeeArray[i].getSurname() << " " << employeeArray[i].getAge()
                        << " " << employeeArray[i].getNationallity() << " " << employeeArray[i].getGender() << " " << employeeArray[i].getJob()
                        << " " << employeeArray[i].getCity() << " " << employeeArray[i].getSalary() << " " << employeeArray[i].getTax() << endl;
            }

            myFile1.close();
        }
        else if (migrantType == 2)
        {
            usingBudget -= 1000;

            for (size_t i = index; i < refugeeSize - 1; i++)
            {
                refugeeArray[i] = refugeeArray[i + 1];
            }
            refugeeSize--;

            myFile1.open("refugee.txt", ios::out);

            for (size_t i = 0; i < refugeeSize; i++)
            {
                myFile1 << refugeeArray[i].getID() << " " << refugeeArray[i].getName() << " " << refugeeArray[i].getSurname() << " " << refugeeArray[i].getAge()
                        << " " << refugeeArray[i].getNationallity() << " " << refugeeArray[i].getGender() << " " << refugeeArray[i].getCamp() << endl;
            }

            myFile1.close();
        }
    }
    else
    {
        budget += 15000;
    }
}

int Guilty::search(Employee *array, int size, string id)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i].getID() == id)
        {
            return i;
        }
    }

    return -1;
}

int Guilty::search(Refugee *array, int size, string id)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i].getID() == id)
        {
            return i;
        }
    }

    return -1;
}

void Guilty::addGuiltyFile()
{
    ofstream myFile;
    myFile.open("guilty.txt", ios::app);

    myFile << id << " " << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << crime << " " << punishment << endl;

    myFile.close();
}

string Guilty::getCrime()
{
    return crime;
}

string Guilty::getPunishment()
{
    return punishment;
}