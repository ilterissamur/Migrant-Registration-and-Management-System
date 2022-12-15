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

    float applicantPoint;
    int iqP, mentalP, talentP, healthP, acculturationP;


    if (10 < m.getAge() && m.getAge() < 24) {

        cout << "Please input applicant's iq test point:";
        cin >> iqP;

        cout << "\nPlease input applicant's talent test point:";
        cin >> talentP;

        cout << "\nPlease input applicant's  health test point:";
        cin >> healthP;

        applicantPoint = float(iqP + talentP + healthP) / 3;

        if (applicantPoint >80) {
            return 1;
        }
        else if (applicantPoint > 60) {
            return 2;
        }
        else {
            cout << "Child's average point isn't enough!" << endl;
        }
       

    }


    if (24 < m.getAge() && m.getAge() < 60) {

        cout << "Please input applicant's mental test point:";
        cin >> mentalP;

        cout << "Please input applicant's acculturation test point:";
        cin >> acculturationP;

        cout << "Please input applicant's health test point:";
        cin >> healthP;

        applicantPoint = float(mentalP + acculturationP + healthP) / 3;

        if (applicantPoint > 90) {
            return 3;
        }
        else if (applicantPoint > 70) {
            return 4;
        }
        else if (applicantPoint > 55) {
            return 5;
        }
        else {
            cout << "Applicant's average point isn't enough!" << endl;
        }
    }

    
}