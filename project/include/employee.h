#include <iostream>
#include <string>
#include "person.h"

using namespace std;

class employee : public person
{
private:

    string job, city;
    int salary, tax;
    
public:
    employee();
    void findJob(int point); // finding job wrt point
    int takeTax(int a);  // taking tax according to salary
    void display();
};