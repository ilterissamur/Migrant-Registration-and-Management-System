#include "migrants.h"

migrants::migrants(int numberOfPerson) // constructor that takes the number of person at data.txt and create dynamic person array with respect to person number
{
    personSize = numberOfPerson;
    arraySize = numberOfPerson + 10;
    personArray = new person[arraySize];
}

void migrants::addPerson(person &newPerson) // function that adds person to dynamic person array and checks the size of array
{
    if (personSize < arraySize)
    {
        personArray[personSize] = newPerson;
        personSize++;
    }
    else
    {
        arraySize = arraySize + 10;
        person *temp = new person[arraySize];

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

void migrants::readArrayData() // fills person array with respect to data.txt
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

void migrants::createArrayID() // fills id of persons which in person array
{
    ofstream myFile;
    myFile.open("id.txt", ios::out);

    for (size_t i = 0; i < personSize; i++)
    {
        personArray[i].createID();
        myFile << personArray[i].getID() << endl;
    }
}

int migrants::filter(person p) // filters person is refugee or employee (BAKILACAK)
{

    float personPoint;
    int iqPoint, mentalPoint, talentPoint, healthPoint, acculturationPoint;

    if (10 < p.getAge() && p.getAge() < 24)
    {

        cout << "Please input person's iq test point:";
        cin >> iqPoint;

        cout << "\nPlease input person's talent test point:";
        cin >> talentPoint;

        cout << "\nPlease input person's  health test point:";
        cin >> healthPoint;

        personPoint = float(iqPoint + talentPoint + healthPoint) / 3;

        if (personPoint > 80)
        {
            return 1;
        }
        else if (personPoint > 60)
        {
            return 2;
        }
        else
        {
            cout << "Child's average point isn't enough!" << endl;
        }
    }
    if (24 < p.getAge() && p.getAge() < 60)
    {

        cout << "Please input person's mental test point:";
        cin >> mentalPoint;

        cout << "Please input person's acculturation test point:";
        cin >> acculturationPoint;

        cout << "Please input applicant's health test point:";
        cin >> healthPoint;

        personPoint = float(mentalPoint + acculturationPoint + healthPoint) / 3;

        if (personPoint > 90)
        {
            return 3;
        }
        else if (personPoint > 70)
        {
            return 4;
        }
        else if (personPoint > 55)
        {
            return 5;
        }
        else
        {
            cout << "Person's average point isn't enough!" << endl;
        }
    }
}