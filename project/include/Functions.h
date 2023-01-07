#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// This is not a Class. Just declare header file for funcitons.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int displayMenu();
int calculateDataSize(string fileName, ifstream &myFile);

#endif