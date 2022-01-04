#include <stdio.h>
int main()
{
    char string[80];
    printf("Please enter the name\n");
    gets(string);
    printf("%s", string);
}