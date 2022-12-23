#ifndef REFUGEE_H
#define REFUGEE_H

#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"

using namespace std;

class Refugee : public Person
{
private:
    string camp;

public:
    Refugee();
    Refugee(Person &source);
    void setRefugeeData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &camp);
    void setCamp();
    void addRefugeeFile();
    string getCamp();
};

#endif