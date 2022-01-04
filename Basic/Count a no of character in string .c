#include <stdio.h>
int main()
{
    char string[80]="IIIT Dharwad";
    int i, c = 0;
    char a;
    a = getchar();
    // printf("Please Enter the character\n");
    // scanf("%c", a);
    for (i = 0; string[i] != '\0'; ++i)
    {
        if(string[i] == a)
           {
               c++;
           }
    }
    printf("%d times %c is present in string", c, a);
}