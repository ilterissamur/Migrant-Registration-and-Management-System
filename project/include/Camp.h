#include <iostream>
#include <string>
#include "Refugee.h"

using namespace std;

class Camp
{
private:
    int refugeeSize, arraySize, campBudget;
    string city;
    Refugee *refugeeArray{nullptr};

public:
    void addNewRefugee(Refugee &newRefugee);
    Camp(int numberOfRefugee);
    void setCampBudget(int newBudget);
};
