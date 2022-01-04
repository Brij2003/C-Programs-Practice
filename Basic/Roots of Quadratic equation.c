#include <stdio.h>
#include <math.h>
main()
{
    float a, b, c, discriminant, root1, root2;
    printf("Input values of a,b,and c\n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if(discriminant<0)
    {
        printf("Enter Quadratic Has Imaginary Roots");
    }
    else
    {
        root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("root1=%5.2f , root2=%5.2f", root1, root2);
    }
}