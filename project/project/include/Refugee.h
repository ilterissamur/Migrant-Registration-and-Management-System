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
    void setCamp();
};