#include <stdio.h>
int Reverse(int n)
{
    int r, sum = 0;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    return sum;
}
int check(int sum)
{
    int temp, n;
    printf("Enter the number\n");
    scanf("%d", &n);
    temp = n;
    sum = Reverse(n);
    {
        if (temp == sum)
            printf("palindrome number \n");
        else
            printf("not palindrome\n");
        return 0;
    }
}
int main()
{
    int sum;
    check(sum);
}