#include "camp.h"

camp::camp(int numberOfRefugee)
{
    refugeeSize = numberOfRefugee;
    arraySize = numberOfRefugee + 10;
    refugeeArray = new refugee[arraySize];
}

void camp::addNewRefugee(refugee &newRefugee)
{
    if (refugeeSize < arraySize)
    {
        refugeeArray[refugeeSize] = newRefugee;
        refugeeSize++;
    }
    else
    {
        arraySize = arraySize + 10;
        refugee *temp = new refugee[arraySize];

        for (size_t i = 0; i < refugeeSize; i++)
        {
            temp[i] = refugeeArray[i];
        }

        temp[refugeeSize] = newRefugee;
        refugeeSize++;

        delete[] refugeeArray;
        refugeeArray = temp;
    }
}