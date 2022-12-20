#include "Employee.h"

void Employee::findJob(string grade)
{
    int option, j = 0;
    string tempString1, tempString2;
    ifstream myFile1, myFile2;

    if (grade == "A")
    {
        salary = 20000;
        tax = salary * 0.2;

        myFile1.open("job.txt", ios::in);
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
        }
        cout << "Choose school: ";
        cin >> option;
        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2;

        myFile1.close();
        myFile2.close();

        myFile1.open("city.txt", ios::in);
        myFile2.open("city.txt", ios::in);

        j = 0;

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1;
            cout << ++j << "- " << tempString1 << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> city;
        }

        myFile1.close();
        myFile2.close();
    }
    else if (grade == "B")
    {
        salary = 15000;
        tax = salary * 0.15;

        j = 0;
        myFile1.open("job.txt", ios::in);
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            myFile2 >> tempString1 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
        }
        cout << "Choose school: ";
        cin >> option;
        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2;

        myFile1.close();
        myFile2.close();

        myFile1.open("city.txt", ios::in);
        myFile2.open("city.txt", ios::in);

        j = 0;

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1;
            myFile2 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1;
            cout << ++j << "- " << tempString1 << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> city;
        }
    }
    else if (grade == "C")
    {
        salary = 5000;
        tax = salary * 0.1;

        j = 0;
        myFile1.open("job.txt", ios::in);
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 10; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            myFile2 >> tempString1 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
        }
        cout << "Choose school: ";
        cin >> option;
        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2;

        myFile1.close();
        myFile2.close();

        myFile1.open("city.txt", ios::in);
        myFile2.open("city.txt", ios::in);

        j = 0;

        for (size_t i = 0; i < 10; i++)
        {
            myFile1 >> tempString1;
            myFile2 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1;
            cout << ++j << "- " << tempString1 << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option < 1 || option > 5)
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> city;
        }
    }
}

void Employee::addEmployeeFile()
{
    ofstream myFile;
    myFile.open("employee.txt", ios::app);

    myFile << id << " " << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << job << " " << city << " " << salary << endl;

    myFile.close();
}

void Employee::setEmployeeData(string id, string name, string surname, int age, string nationallity, string gender, string job, string city, int salary)
{
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->job = job;
    this->city = city;
    this->salary = salary;
}

Employee::Employee(Person &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getNationallity();
    id = source.getID();
}

Employee::Employee()
{
}

double Employee::getTax()
{
    return tax;
}