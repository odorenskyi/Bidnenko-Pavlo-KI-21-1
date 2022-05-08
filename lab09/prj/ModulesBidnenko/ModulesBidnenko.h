#ifndef MODULESBIDNENKO_H_INCLUDED
#define MODULESBIDNENKO_H_INCLUDED

int s_calculation(int x, int z);
struct deposit {
    float percents;
    float dailypay;
};

struct middleTemp {
    float fahrenheit;
    float celsius;
};

deposit depositGRN(float money, unsigned int months);
middleTemp middleWeaklyTemperature (float PN, float VT, float SR, float CH, float PT, float SB, float ND);
int binaryNumber(int number);

#endif // MODULESBIDNENKO_H_INCLUDED
