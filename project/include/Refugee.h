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
    void setRefugeeData(string tempID, string tempName, string tempSurname, int tempAge, string tempNationallity, string tempGender, string tempCamp);
    int setCamp();
    void addRefugeeFile();
};