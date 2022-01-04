#include <stdio.h>
int main()
{
    int i, j, k = 0, a = 5, b = a - 1;
    
    for (i = 1; i <= a; ++i, k = 0)
    {
        for (j = 1; j <= a - i; ++j)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    for (i = b; i >= 1; --i, k=0)
    {
        for (j = 0; j <= b - i; ++j)
        {
            printf("  ");
        }
        while (k != (2 * i) - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
}