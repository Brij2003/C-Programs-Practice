#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX];

int sort(int n)
{
    int temp, i, j, r;
    int count = 0;
    j = 0;
    while(j < n)
    {
        temp = arr[j];
        int p = 0;
        for (i = 1; i < n; i++)
        {
            if (temp == arr[i])
            {
                int x;
                x = arr[i];
                arr[i] = temp;
                arr[p] = x;
            }
            if(temp < arr[i])
            {
                temp = arr[i];
                p = i;
            }
            if(i == n - 1)
            {
                if(arr[i] != arr[p])
                {
                    int x; 
                    x = arr[i];
                    arr[i] = temp;
                    arr[p] = x;
                    count++;
                }
            }
        }
        n--;
    }

    for (i = 0; arr[i] != '\0'; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nTotal no of minimum swap are %d", count);
}
void main()
{
    int i, a;
    printf("\nPlease enter the Array size: ");
    scanf("%d", &a);
    printf("\nEnter the Array to be sorted\n");
    for(i = 0; i < a; i++)
    {
        printf("\nEnter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(a);
}