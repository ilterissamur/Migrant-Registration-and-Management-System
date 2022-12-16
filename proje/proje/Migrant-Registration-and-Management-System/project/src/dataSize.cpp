#include "dataSize.h"

int dataSize()//datadaki line sayısını sayıp returnleyen fonksiyon
{
    string tempLine;
    int n {0};

    fstream myFile;
    myFile.open("data.txt", ios::in);

    if(!myFile)
    {
        cout << "file not found";
    }
    else
    {
        while(1)
        {
            getline(myFile, tempLine);
            n++;

            if(myFile.eof())
            {
                break;
            }
        }
    }

    return n;
}