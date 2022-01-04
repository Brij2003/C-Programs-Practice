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
int Reverse(int n)
{
    int r, sum = 0,temp;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}
int fun(int i)
{
    int a, c;
        a = prime(i);
        if(a==1)
        {
            c = Reverse(i);
            if(c==1)
            {
                return 1;
            }
        }
}
int main()
{
    int a, i, n;
    printf("Please enter the number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        a = fun(i);
        if(a==1)
        {
            printf("%d ", i);
        }
    }
}
