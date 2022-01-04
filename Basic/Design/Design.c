#include <stdio.h>
int main()
{
    int a, i, j, c;
    printf("Please Enter the number of rows:");
    scanf("%d", &a);
    for (i = 1; i <= a; ++i,c = 0)
    {
        for(j = 1; j <=a - i; ++j)
        {
            printf("  ");
        }
        while(c!=i)
        {
            printf("   *");
            c++;
        }
        printf("\n");
    }
}