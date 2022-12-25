#include "Employee.h"

Employee::Employee() // Default Constructor
{
}

Employee::Employee(Person &source) // Copy constructor from Person class.
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getGender();
    id = source.getID();
}

// Set employee data to our persons' informations.
void Employee::setEmployeeData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &job, const string &city, const int &salary, const int &tax)
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
    this->tax = tax;
}

void Employee::findJob(string grade) // Thanks to the this function, find a job for employees according to the their grades. (Grades are determined by another function filter() ).
{
    int option, j = 0;
    string tempString1, tempString2;
    ifstream myFile1, myFile2;

    if (grade == "A") // If grades equalt to A salary is 20000, and tax rate is 0.2.
    {
        salary = 20000;
        tax = salary * 0.2;

        myFile1.open("job.txt", ios::in); // We open two times file. One file is showing the school's options, the another is assigned for job according to the option.
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 5; i++) // Read school information from job.txt and printing.
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
        }
        cout << "Choose school: ";
        cin >> option;
        while (option < 1 || option > 5) // Checking option process.
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2;

        myFile1.close(); // Close files.
        myFile2.close();

        myFile1.open("city.txt", ios::in); // We open two times file. One file is showing the city's options, the another is assigned for city according to the option.
        myFile2.open("city.txt", ios::in);

        j = 0;
        cout << "\n";
        for (size_t i = 0; i < 5; i++) // Read school information from city.txt and printing.
        {
            myFile1 >> tempString1;
            cout << ++j << "- " << tempString1 << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option < 1 || option > 5) // Checking option process.
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> city;
        }

        myFile1.close(); // Close files.
        myFile2.close();
    }
    else if (grade == "B") // If grades equalt to B salary is 15000, and tax rate is 0.15.
    {
        salary = 15000;
        tax = salary * 0.15;

        j = 0;
        myFile1.open("job.txt", ios::in); // We open two times file. One file is showing the school's options, the another is assigned for job according to the option.
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            myFile2 >> tempString1 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++) // Read school information from job.txt and printing.
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
        }
        cout << "Choose school: ";
        cin >> option;
        while (option < 1 || option > 5) // Checking option process.
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2; // Assing the job according to the option.

        myFile1.close(); // Close files.
        myFile2.close();

        myFile1.open("city.txt", ios::in); // We open two times file. One file is showing the city's options, the another is assigned for job according to the option.
        myFile2.open("city.txt", ios::in);

        j = 0;

        for (size_t i = 0; i < 5; i++)
        {
            myFile1 >> tempString1;
            myFile2 >> tempString2;
        }
        cout << "\n";
        for (size_t i = 0; i < 5; i++) // Read school information from city.txt and printing.
        {
            myFile1 >> tempString1;
            cout << ++j << "- " << tempString1 << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option < 1 || option > 5) // Checking option process.
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++) // Assing the city according to the option.
        {
            myFile2 >> city;
        }
    }
    else if (grade == "C") // If grades equalt to C salary is 7500, and tax rate is 0.1.
    {
        salary = 7500;
        tax = salary * 0.1;

        j = 0;
        myFile1.open("job.txt", ios::in); // We open two times file. One file is showing the school's options, the another is assigned for job according to the option.
        myFile2.open("job.txt", ios::in);

        for (size_t i = 0; i < 10; i++)
        {
            myFile1 >> tempString1 >> tempString2;
            myFile2 >> tempString1 >> tempString2;
        }
        for (size_t i = 0; i < 5; i++) // Read school information from job.txt and printing.
        {
            myFile1 >> tempString1 >> tempString2;
            cout << ++j << "- " << tempString1 << " " << tempString2 << endl;
        }
        cout << "Choose school: ";
        cin >> option;
        while (option < 1 || option > 5) // Checking option process.
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++)
        {
            myFile2 >> tempString1 >> tempString2;
        }

        job = tempString1 + " " + tempString2; // Assing the job according to the option.

        myFile1.close(); // Close files.
        myFile2.close();

        myFile1.open("city.txt", ios::in); // We open two times file. One file is showing the city's options, the another is assigned for job according to the option.
        myFile2.open("city.txt", ios::in);

        j = 0;

        for (size_t i = 0; i < 10; i++)
        {
            myFile1 >> tempString1;
            myFile2 >> tempString2;
        }
        cout << "\n";
        for (size_t i = 0; i < 5; i++) // Read school information from city.txt and printing.
        {
            myFile1 >> tempString1;
            cout << ++j << "- " << tempString1 << endl;
        }
        cout << "Choose city: ";
        cin >> option;
        while (option < 1 || option > 5) // Checking option process.
        {
            cout << "You entered invalid choice!! Please again enter your choose: ";
            cin >> option;
        }

        for (size_t i = 0; i < option; i++) // Assing the city according to the option.
        {
            myFile2 >> city;
        }
    }
}

void Employee::addEmployeeFile() // Function add employee's information to the end of the file (app mode).
{
    ofstream myFile;
    myFile.open("employee.txt", ios::app);

    myFile << id << " " << name << " " << surname << " " << age << " " << nationallity << " " << gender << " " << job << " " << city << " " << salary << " " << tax << endl;

    myFile.close();
}
// Getter methods.
double Employee::getTax()
{
    return tax;
}

string Employee::getJob()
{
    return job;
}

string Employee::getCity()
{
    return city;
}

int Employee::getSalary()
{
    return salary;
}