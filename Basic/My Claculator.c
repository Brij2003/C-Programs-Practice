#include <stdio.h>

int main()

{

    int a, b, d;
    char c;
    printf("Enter any one operator +, -, *, / \n");
    scanf("%c", &c);
    printf("\n Enter two numbers \n");
    scanf("\n %d \n %d", &a, &b);
    switch (c)
    {
    case '+':
        d = a + b;
        printf("\n The sum is %d", d);
        break;

    case '-':
        d = a - b;
        printf("\n The difference is %d", d);
        break;

    case '*':
        d = a * b;
        printf("\n The product is %d", d);
        break;

    case '/':
        d = a / b;
        printf("\n The quotient is %d", d);
        break;

    default:
        printf("\n Invalid entry");
    }

}