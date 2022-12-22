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
    void setGuiltyData(string id, string name, string surname, int age, string nationallity, string gender, string crime, string punishment);
    void setPunishment();
    void makePunsihment();
};

#endif