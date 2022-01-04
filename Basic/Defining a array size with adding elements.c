#include <stdio.h>
int Reverse(int n)
{
    int r, sum = 0, temp;
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
int input(int numbers)
{
    int i;
    int a[numbers];
    for (i = 0; i < numbers; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < numbers; ++i)
    {
        printf("%d ", a[i]);
    }
}
void main()
{
    int array;
    printf("Please Enter the size of array\n");
    scanf("%d", &array);
    input(array);
}