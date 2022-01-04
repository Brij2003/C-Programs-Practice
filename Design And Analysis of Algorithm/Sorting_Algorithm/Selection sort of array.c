#include <stdio.h>

int sort(int arr[], int n)
{
    int temp, i;
    int count = 0;
    int j = 0;
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
    printf("\nTotal no of minimum swap are %d\n", count);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void main()
{
    int a = 6;
    int arr[] = {5, 1, 8, 4, 10, 1};
    sort(arr,a);
    print(arr, a);
}