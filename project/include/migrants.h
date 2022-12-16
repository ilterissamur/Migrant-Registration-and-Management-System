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
    void addPerson(person &newPerson);
    void readArrayData();
    void createArrayID();
};

#endif