#include "Camp.h"

Camp::Camp(int numberOfRefugee)
{
    refugeeSize = numberOfRefugee;
    arraySize = numberOfRefugee + 10;
    refugeeArray = new Refugee[arraySize];
}

void Camp::addNewRefugee(Refugee &newRefugee)
{
    if (refugeeSize < arraySize)
    {
        refugeeArray[refugeeSize] = newRefugee;
        refugeeSize++;
    }
    else
    {
        arraySize = arraySize + 10;
        Refugee *temp = new Refugee[arraySize];

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

void Camp::setCampBudget(int newBudget)
{
    campBudget = newBudget;
}

int Camp::getRefugeesize()
{
    return refugeeSize;
}