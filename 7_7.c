#include <stdio.h>

int main() 
{
    double money, rate, sum = 0.0;                           //初始化sum变量//
    int year;                                               
    scanf_s("%lf %d %lf", &money, &year, &rate);  

    double S = 1.0;
    for (int i = 0; i < year; ++i)
    {
        S *= (1 + rate);
    }
    sum = money * S;

    printf("sum = %.2lf\n", sum);

    return 0;
}
