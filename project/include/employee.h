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
    void findJob(int a); // tunanın puana göre iş bulma
    int takeTax(int a);  // salarye göre vergi alma
    void display();
};