#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class Employee : public Person
{
private:
    string job, city;
    int salary;
    double tax;

public:
    void findJob(string grade);
  //  int takeTax(); // taking tax according to salary
};