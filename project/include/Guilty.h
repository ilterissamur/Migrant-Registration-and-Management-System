#ifndef GUILTY_H
#define GUILTY_H

#include <iostream>
#include <fstream>
#include "Employee.h"
#include "Refugee.h"

using namespace std;

class Guilty : public Person
{
private:
    string crime;
    string punishment;

public:
    Guilty();
    Guilty(Employee &source);
    Guilty(Refugee &source);
    void setCrime();
    void setGuiltyData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &crime, const string &punishment);
    void setPunishment();
    void applyPunsihment();
    int search(Employee *array, int size, string id);
    int search(Refugee *array, int size, string id);
};

#endif