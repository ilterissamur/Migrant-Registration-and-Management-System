#include <iostream>
#include <string>
#include "person.h"
#include "camp.h"

using namespace std;

class refugee : public person
{
private:
    int helpMoney;
    string camp;

public:
    int setCamp();
};