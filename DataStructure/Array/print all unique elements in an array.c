#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, temp, j, count, a;
    int Arr[80];
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element-%d :", i);
        scanf("%d", &Arr[i]);
    }
    printf("Input %d elements in the array :", n);
    for (i = 0; i < n; i++, count = 0)
    {
        for (j = 0; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                count = count + 1;
            }
        }
        if (count > 1)
        {
            continue;
            printf("The unique elements found in the array are: %d ", Arr[i]);
        }
        else
        {
            printf("The unique elements found in the array are: %d\n", Arr[i]);
        }
    }
}