#include <stdio.h>

int sort(int arr[], int n)
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
    int i;
    int a = 6;
    int arr[] = {5, 1, 8, 4, 10, 1};
    sort(arr,a);
}