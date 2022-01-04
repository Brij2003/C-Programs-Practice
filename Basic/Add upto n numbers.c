#include <stdio.h>
int add(n)
{
    if(n==0)
        return 0;
    else
        return n + add(n - 1);
}
void main()
{
    int res;
    res = add(10);
    printf("%d", res);
}