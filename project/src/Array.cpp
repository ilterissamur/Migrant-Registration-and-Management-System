#include "Array.h"
// Three argument Constructor.
Array::Array(int numberOfEmployee, int numberOfRefugee, int numberOfGuilty)
{
    employeeSize = numberOfEmployee; // Assigning migrants' size.
    refugeeSize = numberOfRefugee;
    guiltySize = numberOfGuilty;
    employeeArraySize = numberOfEmployee + 10; // The size of the migrants' array change according to the number of migrants in every 10 (We use this method to use memory efficemtly).
    refugeeArraySize = numberOfRefugee + 10;
    guiltyArraySize = numberOfGuilty + 10;
    employeeArray = new Employee[employeeArraySize]; // We create new employee array form heap according to the migrants' arrays size.
    refugeeArray = new Refugee[refugeeArraySize];
    guiltyArray = new Guilty[guiltyArraySize];
}

Array::~Array() // Destructor for all migrants' arrays.
{
    delete[] employeeArray; // After the numbers of operations, should delete the arrays to avoid memory leak.
    delete[] refugeeArray;
    delete[] guiltyArray;
}

void Array::readArrayData()
{
    ifstream myFile1; // Create three differemt file for each migrants' types.
    ifstream myFile2;
    ifstream myFile3;
    myFile1.open("employee.txt", ios::in); // Open the text file to read.
    myFile2.open("refugee.txt", ios::in);
    myFile3.open("guilty.txt", ios::in);

    string tempID, tempName, tempSurname, tempNationallity, tempGender, tempString1, tempString2, tempJob, tempCity, tempCamp, tempCrime, tempPunishment;
    int tempAge, tempSalary, tempTax; // Create temp variables to read from text file.

    for (size_t i = 0; i < employeeSize; i++) // Read the Employees' information from text file line by line.
    {
        myFile1 >> tempID >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempString1 >> tempString2 >> tempCity >> tempSalary >> tempTax;
        tempJob = tempString1 + " " + tempString2;
        employeeArray[i].setEmployeeData(tempID, tempName, tempSurname, tempAge, tempNationallity, tempGender, tempJob, tempCity, tempSalary, tempTax); // Using the employee's setter.
    }

    for (size_t i = 0; i < refugeeSize; i++) // Read the Refugees' information from text file line by line.
    {
        myFile2 >> tempID >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempCamp;
        refugeeArray[i].setRefugeeData(tempID, tempName, tempSurname, tempAge, tempNationallity, tempGender, tempCamp);
    }

    for (size_t i = 0; i < guiltySize; i++) // Read the Guilties' information from text file line by line.
    {
        myFile3 >> tempID >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempString1 >> tempString2 >> tempPunishment;
        tempCrime = tempString1 + " " + tempString2;
        guiltyArray[i].setGuiltyData(tempID, tempName, tempSurname, tempAge, tempNationallity, tempGender, tempCrime, tempPunishment);
    }

    myFile1.close(); // Close the files.
    myFile2.close();
    myFile3.close();
}

void Array::addEmployee(Employee &newEmployee) // Function add new employee to array.
{
    if (employeeSize < employeeArraySize) // If there is a blank area for the new employee directly added and increase by one.
    {
        employeeArray[employeeSize] = newEmployee;
        employeeSize++;
    }
    else // Otherwise creates a new space of 10, then adds all workers. Assign the new array to previous array. Finally deletes the previous array.
    {
        employeeArraySize = employeeArraySize + 10;
        Employee *temp = new Employee[employeeArraySize];

        for (size_t i = 0; i < employeeSize; i++)
        {
            temp[i] = employeeArray[i];
        }

        temp[employeeSize] = newEmployee;
        employeeSize++;

        delete[] employeeArray;
        employeeArray = temp;
    }
}

void Array::addRefugee(Refugee &newRefugee) // Function add new refugee to array.
{
    if (refugeeSize < refugeeArraySize) // If there is a blank area for the new refugee directly added and increase by one.
    {
        refugeeArray[refugeeSize] = newRefugee;
        refugeeSize++;
    }
    else // Otherwise creates a new space of 10, then adds all refugees. Assign the new array to previous array. Finally deletes the previous array.
    {
        refugeeArraySize = refugeeArraySize + 10;
        Refugee *temp = new Refugee[refugeeArraySize];

        for (size_t i = 0; i < refugeeSize; i++)
        {
            temp[i] = refugeeArray[i];
        }

        temp[refugeeSize] = newRefugee;
        refugeeSize++;

        delete[] refugeeArray;
        refugeeArray = temp;
    }
}

void Array::addGuilty(Guilty &newGuilty) // Function add new guilty to array.
{
    if (guiltySize < guiltyArraySize) // If there is a space area for the new guilty directly added and increase by one.
    {
        guiltyArray[guiltySize] = newGuilty;
        guiltySize++;
    }
    else // Otherwise creates a new space of 10, then adds all guilties. Assign the new array to previous array. Finally deletes the previous array.
    {
        guiltyArraySize = guiltyArraySize + 10;
        Guilty *temp = new Guilty[guiltyArraySize];

        for (size_t i = 0; i < guiltySize; i++)
        {
            temp[i] = guiltyArray[i];
        }

        temp[guiltySize] = newGuilty;
        guiltySize++;

        delete[] guiltyArray;
        guiltyArray = temp;
    }
}

void Array::calculateBudget() // Function calculate camp budget according to the employee's salaries' taxes.
{
    ofstream myFile;
    myFile.open("budget.txt", ios::out); // Write to budget txt file.

    int sum = 0;

    for (size_t i = 0; i < employeeSize; i++)
    {
        sum += employeeArray[i].getTax();
    }

    myFile << sum << endl;

    myFile << refugeeSize * 1000; // Each refugees costs an avarage of 1000 liras in the camp.

    myFile.close(); // Close the file.
}

// Getter and Setter methods.
int Array::getEmployeeSize()
{
    return employeeSize;
}

int Array::getRefugeeSize()
{
    return refugeeSize;
}

void Array::setEmployeeSize(int newSize)
{
    employeeSize = newSize;
}

void Array::setRefugeeSize(int newSize)
{
    refugeeSize = newSize;
}

ostream &operator<<(ostream &printEmployee, Employee &e) // Using the operator overloading and setw function, write employees' information whenever the called.
{
    printEmployee << setw(20) << left << e.getID() << setw(20) << left << e.getName() << setw(20) << left << e.getSurname()
                  << setw(20) << left << e.getAge() << setw(20) << left << e.getNationallity() << setw(20) << left << e.getGender()
                  << setw(20) << left << e.getJob() << setw(20) << left << e.getCity() << setw(20) << left << e.getSalary()
                  << setw(20) << left << e.getTax() << endl;

    return printEmployee;
}

ostream &operator<<(ostream &printRefugee, Refugee &r) // Using the operator overloading and setw function, write refugees' information whenever the called.
{
    printRefugee << setw(20) << left << r.getID() << setw(20) << left << r.getName() << setw(20) << left << r.getSurname()
                 << setw(20) << left << r.getAge() << setw(20) << left << r.getNationallity() << setw(20) << left << r.getGender()
                 << setw(20) << left << r.getCamp() << endl;

    return printRefugee;
}

ostream &operator<<(ostream &printGuilty, Guilty &g) // Using the operator overloading and setw function, write guilties' information whenever the called.
{
    printGuilty << setw(20) << left << g.getID() << setw(20) << left << g.getName() << setw(20) << left << g.getSurname()
                << setw(20) << left << g.getAge() << setw(20) << left << g.getNationallity() << setw(20) << left << g.getGender()
                << setw(20) << left << g.getCrime() << setw(20) << left << g.getPunishment() << endl;

    return printGuilty;
}

void Array::print(string mode) // According to  the string mode, thanks to the this function write titles and informations.
{
    if (mode == "Employee")
    {
        cout << setw(20) << left << "ID" << setw(20) << left << "Name" << setw(20) << left << "Surname" << setw(20) << left << "Age"
             << setw(20) << left << "Nationallity" << setw(20) << left << "Gender" << setw(20) << left << "Job" << setw(20) << left << "City"
             << setw(20) << left << "Salary" << setw(20) << left << "Tax" << endl;
        cout << "\n";

        for (size_t i = 0; i < employeeSize; i++)
        {
            cout << employeeArray[i] << endl;
        }
    }
    else if (mode == "Refugee")
    {
        cout << setw(20) << left << "ID" << setw(20) << left << "Name" << setw(20) << left << "Surname" << setw(20) << left << "Age"
             << setw(20) << left << "Nationallity" << setw(20) << left << "Gender" << setw(20) << left << "Camp" << endl;
        cout << "\n";

        for (size_t i = 0; i < refugeeSize; i++)
        {
            cout << refugeeArray[i];
        }
    }
    else
    {
        cout << setw(20) << left << "ID" << setw(20) << left << "Name" << setw(20) << left << "Surname" << setw(20) << left << "Age"
             << setw(20) << left << "Nationallity" << setw(20) << left << "Gender" << setw(20) << left << "Crime" << setw(20) << left << "Punishment" << endl;
        cout << "\n";

        for (size_t i = 0; i < guiltySize; i++)
        {
            cout << guiltyArray[i];
        }
    }
}