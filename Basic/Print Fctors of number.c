#include <stdio.h>
void main()
{
    int a, i ,c;
    printf("please enter the number you want to have factor\n");
    scanf("%d", &a);
    {
        for (i = 1; i <= a; ++i)
        {
            c = a % i;
            if(c == 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}