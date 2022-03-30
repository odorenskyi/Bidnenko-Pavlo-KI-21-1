#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstring>
#include "ModulesBidnenko.h"

using namespace std;

int x = 0, z = 0;
char a = '0', b = '0';

string authorCopyright()
{
    return "© Бідненко Павло Максимович";
}

void inputVariables(int X, int Z, char A, char B)
{
    cout << "Введіть число X: ";    cin >> X;   x = X;
    cout << "Введіть число Z: ";    cin >> Z;   z = Z;
    cout << "Введіть символ №1: ";  cin >> A;   a = A;
    cout << "Введіть символ №2: ";  cin >> B;   b = B;
    cout << endl;
}

bool logicalExpression(int A, int B)
{
    return A + 1 > abs(B - 2);
}

void decimalHexNumbersOutput(int X, int Z)
{
    cout << "'x' в десятковій: " << dec << X << endl
         << "'z' в десятковій: " << dec << Z << endl << endl;

    cout << "'x' в шістнацятковій: " << hex << X << endl
         << "'z' в шістнацятковій: " << hex << Z << endl;
}

int main()
{
    system("chcp 65001 & cls");
    cout << authorCopyright() << endl << endl;
    inputVariables(x, z, a, b);
    cout << boolalpha
         << "Результат " << a << " + 10 >= " << b << " : " << logicalExpression(a, b) << endl << endl;
    decimalHexNumbersOutput(x, z);
    cout << endl << "Результат виразу: " << s_calculation(x, z);
    getchar(); return 0;
}
