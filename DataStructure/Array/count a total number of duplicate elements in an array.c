#include <stdio.h>
#include <string.h>
#define MAX 100
int Arr[MAX];
int main()
{
    int i, n, temp, j, count = 0, a;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // int Arr[n];
    printf("Input %d elements in the array :\n", n);
    for ( i = 0; i < n; i++)
    {
        printf("element-%d :", i);
        scanf("%d", &Arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            
            if (Arr[i] == Arr[j])
            {
                count = count + 1;
            }
            
        }
        
    }
    if (count > 1)
    {
        printf("Total number of duplicate element found in the array is : %d\n", count);
    }
    else
    {
        printf("No duplicate element is found\n");
    }
}