#include "Color.h"

void Color::printBlack(string sentence)
{
    cout << "\033[30m" << sentence << endl;
}

void Color::printRed(string sentence)
{
    cout << "\033[91m" << sentence << "\033[0m" << endl;
}

void Color::printGreen(string sentence)
{
    cout << "\033[92m" << sentence << endl;
}

void Color::printOrange(string sentence)
{
    cout << "\033[93m" << sentence << endl;
}

void Color::printBlue(string sentence)
{
    cout << "\033[94m" << sentence << endl;
}

void Color::printMagenta(string sentence)
{
    cout << "\033[95m" << sentence << endl;
}