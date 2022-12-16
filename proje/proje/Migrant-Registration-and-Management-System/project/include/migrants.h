#ifndef MIGRANTS_H
#define MIGRANTS_H

#include <iostream>
#include <fstream>
#include "person.h"

class Migrants
{
private:
    int arraySize, personSize, counter{0};

public:
    Person *personArray{nullptr};

    Migrants(int a);
    void addPerson(Person &newPerson);
    void readArrayData();
    void createArrayID();
};

#endif