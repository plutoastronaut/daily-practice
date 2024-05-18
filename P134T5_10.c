#include<stdio.h>
#include<math.h>

int main()
{
    int i, j;
    for (i = 101; i <= 200; i += 2)
    {
        for (j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
                break;
            if (j >= i / 2)
            {
                printf("%3d", i);
            }
        }
    }
    return 0;
}
