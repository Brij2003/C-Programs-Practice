#include <stdio.h>
int factor(int n)
{
    int i;
    int cnt = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    return cnt;
}
int prime(int a)
{
    int x;
    x = factor(a);
    {
        if (x == 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int add(int n)
{
    int a = 0;
    int i, b;
    for (i = 1; i <= n; ++i)
    {
        b = prime(i);
        if(b==1)
        {
            a = i + a;
        }
    }
    return a;
}
int main()
{
    int n, sum;
    printf("Please enter the number:");
    scanf("%d", &n);
    sum = add(n);
    printf("the sum of the prime numbers till %d is %d", n, sum);
}