#include <stdio.h>
int factors(int n)
{
    int i;
    int cnt = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    return cnt;
}
void main()
{
    int n, res;
    printf("Please enter the number:");
    scanf("%d", &n);
    res = factors(n);
    printf("Numbers of factors are %d", res);
}