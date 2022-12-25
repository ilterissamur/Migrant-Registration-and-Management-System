#ifndef REFUGEE_H
#define REFUGEE_H

#include <iostream>
#include <string>
#include <fstream>  // Declare of <fstream> to read and write process from the txt file.
#include "Person.h" // Declare Person.h to copy constructor

using namespace std;
// Start Refugee Class' Definition
class Refugee : public Person // Refugee Class inherited from Person Class.
{
private:
    string camp; // Create this private variable for refugee's camp name.

public:
    Refugee();               // Default Constructor
    Refugee(Person &source); // Copy Constructor.
    void setRefugeeData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &camp);
    void setCamp();
    void addRefugeeFile();
    string getCamp();
};
// End of the Refugee Class' Definition.
#endif