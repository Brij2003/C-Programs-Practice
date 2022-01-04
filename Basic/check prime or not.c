#include <stdio.h>
void main()
{
    int a, i, c;
    printf("please enter the number you want to have factor\n");
    scanf("%d", &a);
    int count = 0;
    {
        for (i = 1; i <= a; ++i)
        {
            c = a % i;
            if (c == 0)
            {
                count++;
            }
        }
    }
    {
        if (count == 2)
        {
            printf("number is prime\n");
        }
        else
        {
            printf("number is not prime\n");
        }
    }
}