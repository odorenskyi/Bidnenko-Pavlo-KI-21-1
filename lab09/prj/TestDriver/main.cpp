#include <iostream>
#include <iomanip>
#include <windows.h>
#include "ModulesBidnenko.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    deposit d;
    d = depositGRN(15000000.00, 30);
    cout << "percents = " << d.percents << endl
    << "daily = " << d.dailypay << endl << endl;
    return 0;
}
