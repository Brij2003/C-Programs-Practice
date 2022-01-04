#include <stdio.h>
#include <time.h>
void insertion_sort(int arr[],int n)
{
    int first, temp, i, j;
    for (j = 1; j < n; j++)
    {
        first = arr[j - 1];
        temp = arr[j];
        if (first > temp)
        {
            arr[j] = first;
            i = j - 1;
            while (arr[i] >= temp)
            {
                arr[i + 1] = arr[i];
                i--;
            }
            arr[i + 1] = temp;
        }
    }
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
    int n;
    clock_t start, end;
    double cpu_time_used;
    start = clock();

    printf("Please enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    printf("Array Before sorting\n");
    print(arr, n);
    insertion_sort(arr, n);
    printf("\nArray after sort is\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    end = clock();
    cpu_time_used = ((end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken %f", cpu_time_used);
    return 0;
}