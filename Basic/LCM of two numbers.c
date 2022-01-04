#include <stdio.h>
int LCM(int a, int b)
{
    int i;
    for (i = 1; i <= a * b; ++i)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("The LCM of %d and %d is %d", a, b, i);
            break;
        }
    }
}
int main()
{
    int i, j, a, b;
    printf("Please Enter the numbers to find LCM:");
    scanf("%d %d", &a, &b);
    LCM(a, b);
}