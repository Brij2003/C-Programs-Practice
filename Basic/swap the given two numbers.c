#include <stdio.h>
void swap(int *p1, int *p2)
{
    int a = *p1;
    *p1 = *p2;
    *p2 = a;
}
void main()
{
   int a;
   int b;
   printf("Please the number\n");
   scanf("%d %d", &a, &b);
   swap(&a, &b);
   printf("%d %d", a, b);
}