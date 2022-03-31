#include "ModulesBidnenko.h"
#include <cmath>
int s_calculation(int x, int z)
{
    return pow(3 * sin(sqrt((12 * pow(x, 2)) / (log(x - 3)))), 2) + 0.5 * z;
}
deposit depositGRN(float money, unsigned int months)
{
	deposit d;
	if (months < 6) {
		return { -1, -1 };
	}
	else {
		int amountHalfYear = months % 6;
		int amountYear = amountHalfYear % 12;
		amountHalfYear = amountHalfYear - (amountYear * 2);

		if (amountYear < 1) {
			d.percents = 19.5;
			d.dailypay = (money * 0.195) / 133;
			return d;
		}
		else {
			d.percents = (19.5 * amountHalfYear) + (27.0 * amountHalfYear);
			d.dailypay = (((money * 0.195) * amountHalfYear) + ((money * 0.270) * amountYear))
					/ ((amountHalfYear + (amountYear * 2)) * 30);
			return d;
		}

	}
}
