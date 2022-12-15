#ifndef MIGRANTS_H
#define MIGRANTS_H

#include <iostream>
#include <fstream>
#include "person.h"

class migrants
{
private:
    int arraySize, personSize, counter{0};

public:
    person *personArray{nullptr};

    migrants(int a);
    void addPerson(person &migrant1);
    void readArrayData();
    void createArrayID();
    int filter(person m);
};

#endif