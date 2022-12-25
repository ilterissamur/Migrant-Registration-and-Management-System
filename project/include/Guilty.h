#ifndef GUILTY_H
#define GUILTY_H

#include <iostream>
#include <fstream>    // Declare of <fstream> to read and write process from the txt file.
#include "Employee.h" // Declare Employee.h to copy constructor and search functions' array.
#include "Refugee.h"  // Declare Refugee.h to copy constructor and search functions' array.

using namespace std;
// Start Guilty Class' Definition
class Guilty : public Person // Guilty Class inherited from Person Class.
{
private:
    string crime, punishment; // These private variables using for type of crime and punishment of the migrants.

public:
    Guilty();
    Guilty(Employee &source);
    Guilty(Refugee &source);
    void setCrime(int migrantType);
    void setGuiltyData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &crime, const string &punishment);
    void setPunishment(int migrantType);
    void applyPunsihment(int migrantType, int &budget, int &usingBudget, Employee *employeeArray, Refugee *refugeeArray, int &employeeSize, int &refugeeSize, int index);
    int search(Employee *array, int size, string id);
    int search(Refugee *array, int size, string id);
    void addGuiltyFile();
    string getCrime();
    string getPunishment();
};
// End of the Guilty Class' Definition.
#endif