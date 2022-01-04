#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
} 
void main()
{
    int res, n;
    n = 100;
    res = fact(n);
    printf("%d", res);
}