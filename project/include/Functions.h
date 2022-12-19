#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int displayMenu();
int dataSize(string fileName, ifstream &myFile);
void calculateBudget();

#endif