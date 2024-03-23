#include<math.h>
#include<stdio.h>
int main()
{
    double money, rate, sum;
    int year;
    scanf_s("%lf %d %lf", &money, &year, &rate);

    sum = money * pow(1 + rate, year);

    printf("sum = %.2lf\n", sum);

    return 0;
}