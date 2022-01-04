#include <stdio.h>
int main()
{
    int shape;
    printf("1.Triangle\n2.rectangle\n3.square\n");
    scanf("%d", &shape);
    switch(shape)
    {
        case 1:
        {
            int i, b, a = 3, k = 0;
            for (i = 1; i <= a; ++i, k = 0)
            {
                for (b = 1; b <= a - i; ++b)
                {
                    printf("  ");
                }
                while (k != 2 * i - 1)
                {
                    printf("* ");
                    ++k;
                }
                printf("\n");
            }
        }
        break;
        case 2:
        {
            int i, a;
            for (i = 1; i <= 3; ++i)
            {
                for (a = 1; a <= 10; ++a)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        break;
        case 3:
        {
            int i, a;
            for (i = 1; i <= 3; ++i)
            {
                for (a = 1; a <= 3; ++a)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        break;
    }
    
}