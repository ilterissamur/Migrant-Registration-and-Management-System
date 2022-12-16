#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Refugee : public Person
{
private:
    int helpMoney;
    string camp;

public:
    int setCamp();
};