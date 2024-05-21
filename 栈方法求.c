#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int a;
    int b;
    double result;
} StackFrame;

double Fn(int a, int b);

int main() {
    int n, x;
    double F = 0.0;

    printf("请输入n的值\n");
    scanf_s("%d", &n, sizeof(10));
    printf("请输入x的值\n");
    scanf_s("%d", &x, sizeof(10));

    F = Fn(n, x);
    printf("用栈算法得出的函数值为：%.2lf\n", F);

    return 0;
}

double Fn(int a, int b)
{
    double* stack = (double*)malloc(sizeof(double) * (a + 1));
    for (int i = 0; i <= a; i++) 
    {
        stack[i] = 0.0;
    }

    if (a == 0)
    {
        free(stack);
        return 1;
    }
    else if (a == 1) {
        free(stack);
        return 2 * b;
    }

    stack[0] = 1;
    stack[1] = 2 * b;

    for (int i = 2; i <= a; i++) 
    {
        stack[i] = 2 * b * stack[i - 1] - 2 * (i - 1) * stack[i - 2];
    }

    double result = stack[a];
    free(stack);
    return result;
}