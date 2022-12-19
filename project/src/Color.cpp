#include "Color.h"

void Color::printDefault(string sentence)
{
    cout << "\033[39m" << sentence << endl;
}

void Color::printBlack(string sentence)
{
    cout << "\033[30m" << sentence << endl;
}

void Color::printDarkRed(string sentence)
{
    cout << "\033[31m" << sentence << endl;
}

void Color::printDarkGreen(string sentence)
{
    cout << "\033[32m" << sentence << endl;
}

void Color::printDarkYellow(string sentence)
{
    cout << "\033[33m" << sentence << endl;
}

void Color::printDarkBlue(string sentence)
{
    cout << "\033[34m" << sentence << endl;
}

void Color::printDarkMagenta(string sentence)
{
    cout << "\033[35m" << sentence << endl;
}

void Color::printDarkCyan(string sentence)
{
    cout << "\033[36m" << sentence << endl;
}

void Color::printLightGray(string sentence)
{
    cout << "\033[37m" << sentence << endl;
}

void Color::printDarkGray(string sentence)
{
    cout << "\033[90m" << sentence << endl;
}

void Color::printRed(string sentence)
{
    cout << "\033[91m" << sentence << endl;
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

void Color::printCyan(string sentence)
{
    cout << "\033[96m" << sentence << endl;
}

void Color::printWhite(string sentence)
{
    cout << "\033[97m" << sentence << endl;
}