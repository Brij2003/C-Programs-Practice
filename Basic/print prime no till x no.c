#include <stdio.h>
int factor(int n)
{
    int i;
    int cnt = 0;
    for (i = 1; i <= n; i++)
    {
        if(n%i==0)
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
        if(x==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }    

}
void main()
{
    int i, res, a;
    printf("please enter the number till which you want to have prime number\n");
    scanf("%d", &a);
    for (i = 1; i <= a; ++i)
    {
        res = prime(i);
        if(res==1)
        {
            printf("%d ",i);
        }
    }
}