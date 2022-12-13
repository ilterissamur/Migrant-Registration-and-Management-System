#include "migrants.h"

migrants:: migrants(int a) //data sizeını alıp dynamic array oluşturan constructor
{
    migrantSize = a;
    arraySize = a + 10;
    migrantArray = new migrant[arraySize];
}

void migrants::addMigrant(migrant &migrant1) //dynamic arraye migrant ekleyen fonksiyon
{
    migrantArray[migrantSize] = migrant1;
    migrantSize++;
    counter++;

    if(counter == 10)
    {
        migrant* temp {nullptr};
        temp = new migrant[arraySize+10];

        for(size_t i=0; i<migrantSize; i++)
        {
            temp[i] = migrantArray[i];
        }

        delete[] migrantArray;
        migrantArray = temp;
    }
}

void migrants::readArrayData() //filedan arraye data okuyan fonksiyon migrant classındaki readDatayı kullanarak okuyor
{
    ifstream myFile;
    myFile.open("data.txt", ios::app);

    string tempName, tempSurname, tempNationallity, tempGender, tempEducation;
    int tempAge;

    for(size_t i=0; i<migrantSize; i++)
    {
        myFile >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempEducation;
        migrantArray[i].setData(tempName , tempSurname , tempAge , tempNationallity , tempGender , tempEducation);
    }
}


void migrants::createArrayID() //arraye id ekleyen fonksiyon migrant classındaki createID fonksiyonunu kullanıyor
{
    ofstream myFile;
    myFile.open("id.txt" , ios::out);

    for(size_t i=0; i<migrantSize; i++)
    {
        migrantArray[i].createID();
    }
}