#include <stdio.h>
int main()
{
    char str[80]="Brij_Vaghani";
    int a;
    
    int i, j;
    a = strlen(str);
    for (i = 0; i < a; ++i)
    {
        for (j = 0; j <= i; ++j)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}