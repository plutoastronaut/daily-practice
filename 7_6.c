#include <stdio.h>
int main()
{
    int  A, B;
    scanf_s("%d %d", &A, &B);

    printf("%d + %d = %d\n", A, B, A + B);
    printf("%d - %d = %d\n", A, B, A - B);
    printf("%d * %d = %d\n", A, B, A * B);
    printf("%d / %d = %d\n", A, B, A / B);
    return 0;
}
