#include <stdio.h>
int Fobbic_serise(int n)
{
    
}
int main()
{
    int a, i, j, b = 0;
    int c = 1,d = 1;
    printf("Please enter the Number of terms you want:");
    scanf("%d", &a);
    for (i = 0; i < a; ++i)
    {
        printf("%d\n", d);
        d = c + b;
        b = c;
        c = d;
    }
}