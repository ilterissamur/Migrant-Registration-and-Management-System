#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"

using namespace std;

class Refugee : public Person
{
private:
    int helpMoney;
    string camp;

public:
    Refugee();
    Refugee(Person &source);
    void setCamp();
};