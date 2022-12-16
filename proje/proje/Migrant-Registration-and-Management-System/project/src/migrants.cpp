#include "migrants.h"

Migrants::Migrants(int numberOfPerson) // constructor that takes the number of person at data.txt and create dynamic person array with respect to person number
{
    personSize = numberOfPerson;
    arraySize = numberOfPerson + 10;
    personArray = new Person[arraySize];
}

void Migrants::addPerson(Person &newPerson) // function that adds person to dynamic person array and checks the size of array
{
    if (personSize < arraySize)
    {
        personArray[personSize] = newPerson;
        personSize++;
    }
    else
    {
        arraySize = arraySize + 10;
        Person *temp = new Person[arraySize];

        for (size_t i = 0; i < personSize; i++)
        {
            temp[i] = personArray[i];
        }

        temp[personSize] = newPerson;
        personSize++;

        delete[] personArray;
        personArray = temp;
    }
}

void Migrants::readArrayData() // fills person array with respect to data.txt
{
    ifstream myFile1;
    ifstream myFile2;
    myFile1.open("data.txt", ios::app);
    myFile2.open("id.txt", ios::app);

    string tempName, tempSurname, tempNationallity, tempGender, tempEducation, tempID;
    int tempAge;

    for (size_t i = 0; i < personSize; i++)
    {
        myFile1 >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempEducation;
        myFile2 >> tempID;
        personArray[i].setData(tempName, tempSurname, tempAge, tempNationallity, tempGender, tempEducation, tempID);
    }
}

void Migrants::createArrayID() // fills id of persons which in person array
{
    ofstream myFile;
    myFile.open("id.txt", ios::out);

    for (size_t i = 0; i < personSize; i++)
    {
        personArray[i].createID();
        myFile << "\n"
               << personArray[i].getID();
    }
}