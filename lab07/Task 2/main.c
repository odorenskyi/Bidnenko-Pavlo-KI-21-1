#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int inputArray[10];
int parnoe = 0;
int neparnoe = 1;
int videmnoe = 0;

void projectInformation()
{
    printf("==========================================================================\n");
    printf("    Виконавець:         Бідненко Павло Максимович\n");
    printf("    Рік розробки:       2022\n");
    printf("    ВНЗ:                Центральний Національний Технічний Університет\n");
    printf("    Мова інтерфейсу:    Українська\n");
    printf("    Призначення:        Виведення суми парних чисел, добутку \n");
    printf("                        непарних чисел та кількість від'ємних чисел \n");
    printf("==========================================================================\n\n");
}

void inputNumArray()
{
    printf("Введіть елементи массиву: \n");
    for (int i = 0; i < 10; i++) {
        printf("[%d] = ", i);
        scanf("%d", &inputArray[i]);
    }
}

void searchMinMax()
{
    for (int i = 0; i < 10; i++) {
        if (inputArray[i] % 2 == 0) { parnoe += inputArray[i]; }
        if (inputArray[i] % 2 == 1) { neparnoe *= inputArray[i]; }
        if (inputArray[i] < 0) { videmnoe += 1; }
    }
}

void printEllements()
{
    printf("Сума парних: %d\n", parnoe);
    printf("Добуток непарних: %d\n", neparnoe);
    printf("Кількість від'ємних: %d\n", videmnoe);
}
int main()
{
    system("chcp 65001 & cls");
    projectInformation();

    inputNumArray();
    searchMinMax();
    printEllements();
    getchar(); return 0;
}
