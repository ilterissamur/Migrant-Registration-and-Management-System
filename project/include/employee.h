#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class employee : public person
{
private:
    string job, city;
    int salary;
    double tax;

public:
    void findJob(string grade);
    int takeTax(); // taking tax according to salary
};