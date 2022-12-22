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

void Guilty::setGuiltyData(string id, string name, string surname, int age, string nationallity, string gender, string crime, string punishment)
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

void Guilty::makePunsihment()
{
}