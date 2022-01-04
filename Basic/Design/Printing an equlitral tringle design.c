#include <stdio.h>
int main()
{
    int i, j, a, k = 0;
    printf("Please Enter the number of rows:");
    scanf("%d", &a);
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
}
