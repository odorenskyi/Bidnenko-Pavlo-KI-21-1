#include "ModulesBidnenko.h"
#include <cmath>
int s_calculation(int x, int z)
{
    return pow(3 * sin(sqrt((12 * pow(x, 2)) / (log(x - 3)))), 2) + 0.5 * z;
}
