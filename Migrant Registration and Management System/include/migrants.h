#ifndef MIGRANTS_H
#define MIGRANTS_H

#include <iostream>
#include <fstream>
#include "person.h"

class migrants
{
    private:
        int arraySize, migrantSize, counter {0};

    public:
        migrant* migrantArray {nullptr};

        migrants(int a);
        void addMigrant(migrant &migrant1);
        void readArrayData();
        void createArrayID();
};

#endif