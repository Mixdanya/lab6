#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int Task1();
int Task2();

int main()
{
    SetConsoleOutputCP(65001);
    Task1();
    Task2();

    return 0;
}

int Task1()
{
    int years;

    printf("Введите год: ");
    scanf("%d", &years);

    int vis = years % 4;

    if ((vis == 0 && years % 100 != 0) || years % 400 == 0)
    {
        printf("Год %d високосный\n", years);
    }
    else
    {
        printf("Год %d не високосный\n", years);
    }

    return 0;
}

int Task2()
{
    double x;


    printf("\nВведите x: ");
    scanf("%lf", &x);

    printf("F(%.2f) = %.6f\n", x,
        x >= 8 ? -pow(x, 2) + x - 9 : 1.0 / (pow(x, 4) - 6));

    return 0;
}
