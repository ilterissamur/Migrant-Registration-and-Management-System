#include "Refugee.h"

Refugee::Refugee()
{
}

Refugee::Refugee(Person &source)
{
    name = source.getName();
    surname = source.getSurname();
    age = source.getAge();
    nationallity = source.getNationallity();
    gender = source.getNationallity();
    id = source.getID();
}

int Refugee::setCamp(int &refugeeSizeA, int &refugeeSizeB, int &refugeeSizeC)
{
    int option, j = 0;
    string tempString;
    ifstream myFile1;
    ifstream myFile2;
    myFile1.open("camp.txt", ios::in);
    myFile2.open("camp.txt", ios::in);

    myFile1 >> tempString;
    cout << ++j << "- " << tempString << "Number of avaliable refugees: " << refugeeSizeA << endl;
    myFile1 >> tempString;
    cout << ++j << "- " << tempString << "Number of avaliable refugees: " << refugeeSizeB << endl;
    myFile1 >> tempString;
    cout << ++j << "- " << tempString << "Number of avaliable refugees: " << refugeeSizeC << endl;

    cout << "Choose camp: ";
    cin >> option;

    while (option < 1 || option > 3)
    {
        cout << "You entered invalid choice!! Please again enter your choose: ";
        cin >> option;
    }

    for (size_t i = 0; i < option; i++)
    {
        myFile2 >> camp;
    }

    myFile1.close();
    myFile2.close();

    return option;
}

void Refugee::addCampFile(string fileName, ofstream &myFile)
{
    myFile.open(fileName, ios::app);

    myFile << id << " " << name << " " << surname << endl;

    myFile.close();
}