#include "migrants.h"

migrants::migrants(int a) // data sizeını alıp dynamic array oluşturan constructor
{
    personSize = a;
    arraySize = a + 10;
    personArray = new person[arraySize];
}

void migrants::addPerson(person &migrant1) // dynamic arraye migrant ekleyen fonksiyon
{
    personArray[personSize] = migrant1;
    personSize++;
    counter++;

    if (counter == 10)
    {
        person *temp{nullptr};
        temp = new person[arraySize + 10];

        for (size_t i = 0; i < personSize; i++)
        {
            temp[i] = personArray[i];
        }

        delete[] personArray;
        personArray = temp;
    }
}

void migrants::readArrayData() // filedan arraye data okuyan fonksiyon migrant classındaki readDatayı kullanarak okuyor
{
    ifstream myFile;
    myFile.open("data.txt", ios::app);

    string tempName, tempSurname, tempNationallity, tempGender, tempEducation;
    int tempAge;

    for (size_t i = 0; i < personSize; i++)
    {
        myFile >> tempName >> tempSurname >> tempAge >> tempNationallity >> tempGender >> tempEducation;
        personArray[i].setData(tempName, tempSurname, tempAge, tempNationallity, tempGender, tempEducation);
    }
}

void migrants::createArrayID() // arraye id ekleyen fonksiyon migrant classındaki createID fonksiyonunu kullanıyor
{
    ofstream myFile;
    myFile.open("id.txt", ios::out);

    for (size_t i = 0; i < personSize; i++)
    {
        personArray[i].createID();
    }
}

int migrants::filter(person m) // sığınmacı mı işçi mi TUNA YAPACAK(education puan ve yaş)
{
    if ((m.getAge() < 16 && m.getAge() > 60) || (m.getAge() > 50 && m.getGender() == "female"))
    {
        return 1; // çalışamayanlar(16 yaşından küçükler ve 60 yaşından büyükler ya da 50 yaşından büyük kadınlar )
    }
    else if (m.getAge() < 40 && m.getGender() == "male")
    {
        return 2; // diri tayfa errrrrrrrrrrrkek(40 yaşından küçük erkekler)
    }
    else if ((m.getAge() < 50 && m.getGender() == "female") || (m.getAge() > 40 && m.getGender() == "male"))
    {
        return 3; // hafif tayfa kadın(50 yaşından küçük kadınlar ya da 40 yaşından büyük erkekler)
    }
}