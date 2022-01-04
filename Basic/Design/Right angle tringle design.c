#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Please Enter the number of rows:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
