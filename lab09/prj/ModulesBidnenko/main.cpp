#include "ModulesBidnenko.h"
#include <cmath>
#include <iostream>
using namespace std;
int s_calculation(int x, int z)
{
    return pow(3 * sin(sqrt((12 * pow(x, 2)) / (log(x - 3)))), 2) + 0.5 * z;
}
deposit depositGRN(float money, unsigned int months)
{
	deposit d;
	if (months < 6 || money < 0) {
		return { 0, 0 };
	}
	else {
		int amountHalfYear = months / 6;
		int amountYear = months / 12;
		amountHalfYear = amountHalfYear - (amountYear * 2);

		if (amountYear < 1) {
			d.percents = 19.5;
			d.dailypay = (money * 0.195) / 133;
			return d;
		}
		else {
            if (amountHalfYear <= 0 && amountYear > 0) { amountHalfYear = 0; }
			d.percents = (19.5 * amountHalfYear) + (27.0 * amountYear);
			d.dailypay = (((money * 0.195) * amountHalfYear) + ((money * 0.270) * amountYear))
					/ ((amountHalfYear + (amountYear * 2)) * 30);
			return d;
		}

	}
}

middleTemp middleWeaklyTemperature(float PN, float VT, float SR, float CH, float PT, float SB, float ND)
{
    middleTemp mt;
    mt.celsius = (PN+VT+SR+CH+PT+SB+ND)/7;
    mt.fahrenheit = 32+(9*mt.celsius)/5;
    return mt;
}

int binaryNumber(int number)
{
    if (number < 0 || number > 17948360) {
        cout << "Помилка: число в недопустимому діапазоні!" << endl;
        return -1;
    }

    int reverseNumber = 0;
    int bitCount = 0;
    for (; number; number /= 2) {
        reverseNumber = reverseNumber * 2 + number % 2;
    }
    number = reverseNumber;
    int saveIndex = 0;
    for (int i = 0; i <= 31; i++) {
        if (number & (1 << i)) { saveIndex = i + 1; }
        bitCount += ((number & (1 << i)) != ((number >> 9) & 1));
    }
    if ((number >> 9) & 1) { bitCount = bitCount - (31 - saveIndex); }

    switch ((number >> 9) & 1) {
        case 0: cout << "Кількість двійкових 1 = " << bitCount << endl; break;
        case 1: cout << "Кількість двійкових 0 = " << bitCount << endl; break;
    }
    return bitCount;
}
