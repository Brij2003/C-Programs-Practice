#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Please enter the year:");
    scanf("%d", &a);
    {
        b = a % 4;
        c = a % 100;
        d = a % 400;
        {
            if(b==0)
            {
                if(d==0)
                {
                    printf("Entered year %d is a leap year", a);
                }
                else if (c==0)
                {
                    printf("Entered year %d is not a leap year", a);
                }
                else
                {
                    printf("Entered year %d is a leap year", a);
                }
            }
            else
            {
                printf("Entered year %d is not a leap year", a);
            }
            
        }
    }
}