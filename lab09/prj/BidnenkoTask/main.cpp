#include <iostream>
#include <conio.h>
#include <random>
#include <time.h>
#include "ModulesBidnenko.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    srand(time(0));
    deposit dp;
    middleTemp mt;

    int bitNumber;
    int randNum;

    while(true) {
        cout << "Введіть символ (h/f/d/s/a/A/p): ";
        float money = rand()%1209869600000000;
        unsigned int month = rand()%240;
        float t1, t2, t3, t4, t5, t6, t7;

        switch (_getch()) {
            case 'h': cout << endl << endl << "s_calculation: " << s_calculation(rand(), rand()) << endl << endl; break;
            case 'f': dp = depositGRN(money, month);
                      cout << endl << "depositGRN: " << endl
                           << "Months: " << month << endl
                           << "Percents: " << dp.percents << "%" << endl
                           << "Dailypay: " << dp.dailypay << " грн" << endl << endl;
                      break;
            case 'd': t1 = -91.1+ static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(56.7-(-91.1))));
                      t2 = -91.1+ static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(56.7-(-91.1))));
                      t3 = -91.1+ static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(56.7-(-91.1))));
                      t4 = -91.1+ static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(56.7-(-91.1))));
                      t5 = -91.1+ static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(56.7-(-91.1))));
                      t6 = -91.1+ static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(56.7-(-91.1))));
                      t7 = -91.1+ static_cast <float> (rand()) / ( static_cast <float> (RAND_MAX/(56.7-(-91.1))));

                      mt = middleWeaklyTemperature(t1, t2, t3, t4, t5, t6, t7);
                      cout << endl << "middleWeaklyTemperature: " << endl
                           << "Celsius: " << mt.celsius << " C" << endl
                           << "Fahrenheit: " << mt.fahrenheit << " F" << endl << endl;
                      break;
            case 's': randNum = rand();
                      cout << endl << endl << "binaryNumber: " << randNum << endl << endl;
                      bitNumber = binaryNumber(randNum);
                      break;
            case 'a': return 0; break;
            case 'A': return 0; break;
            case 'p': return 0; break;
            default: cout << "\a" << endl; continue;
        }
    }
}
