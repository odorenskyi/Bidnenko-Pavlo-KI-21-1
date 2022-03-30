#include <iostream>
#include <iomanip>
#include <windows.h>
#include "ModulesBidnenko.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    float X[5] = { 22, 33, 8, 8, 11 };
    float Z[5] = { -0.8, 0.8, 0, -8, -4 };

    double exResult[5] = { 1, 5, 0, -3, 6 };
    double doneResult = 0;
    double delta = 0.00005;
    bool testResult = false;

    for (int i = 0; i < 5; i++) {
        doneResult = s_calculation(X[i], Z[i]);
        if (abs(exResult[i]) >= abs(doneResult))  { testResult = abs(exResult[i]) - abs(doneResult) <= delta; }
        else                                      { testResult = abs(doneResult) - abs(exResult[i]) <= delta; }

        cout << "Тестові значення №" << i + 1 << " : "
             << "X = " << X[i]
             << "    Z = " << Z[i]
             << endl;
        cout << "Очікуваний результат: " << exResult[i] << endl;
        cout << "Отриманий результат: " << doneResult << endl;
        cout << boolalpha << "Тестовий результат: " << testResult << endl << endl;
    }
    getchar();
    return 0;
}
