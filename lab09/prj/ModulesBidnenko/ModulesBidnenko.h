#ifndef MODULESBIDNENKO_H_INCLUDED
#define MODULESBIDNENKO_H_INCLUDED

int s_calculation(int x, int z);
struct deposit {
    float percents;
    float dailypay;
};


deposit depositGRN(float money, unsigned int months);

#endif // MODULESBIDNENKO_H_INCLUDED
