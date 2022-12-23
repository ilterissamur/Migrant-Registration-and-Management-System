#include "Guilty.h"

Guilty::Guilty()
{
}

Guilty::Guilty(Employee &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getGender();
    id = source.getID();
}

Guilty::Guilty(Refugee &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getGender();
    id = source.getID();
}

void Guilty::setCrime()
{
}

void Guilty::setGuiltyData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &crime, const string &punishment)
{
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->nationallity = nationallity;
    this->gender = gender;
    this->crime = crime;
    this->punishment = punishment;
}

void Guilty::setPunishment()
{
}

void Guilty::applyPunsihment()
{
}

int Guilty::search(Employee *array, int size, string id)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i].getID() == id)
        {
            return i;
        }
    }

    return -1;
}

int Guilty::search(Refugee *array, int size, string id)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i].getID() == id)
        {
            return i;
        }
    }

    return -1;
}