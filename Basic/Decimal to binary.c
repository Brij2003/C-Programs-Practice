#include <stdio.h>
#define MAX 7
int bin[MAX];
int dectobin(int n)
{
    int i = 0;
    do
    {
        int a = n % 2;
        n = (n - a) / 2;
        bin[i] = a;
        i++;
    } while (n > 0);
    for (i = MAX; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
}
int main()
{
    int n;
    printf("Please enter the number:");
    scanf("%d", &n);
    dectobin(n);
}