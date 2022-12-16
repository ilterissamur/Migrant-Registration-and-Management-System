#include <iostream>
#include <string>
#include "refugee.h"

using namespace std;

class camp
{
private:
    int refugeeSize, arraySize, campBudget;
    string city;
    refugee *refugeeArray{nullptr};

public:
    void addNewRefugee(refugee &newRefugee);
    camp(int numberOfRefugee);
};
