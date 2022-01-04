#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int arr[], int a, int c, int b)
{
    int a1[b - a + 1];
    int i = a, j = c + 1, k = 0;
    while (i <= c && j <= b)
    {
        if (arr[i] <= arr[j])
        {
            a1[k] = arr[i];
            k += 1;
            i += 1;
        }
        else
        {
            a1[k] = arr[j];
            k += 1;
            j += 1;
        }
    }
    while (i <= c)
    {
        a1[k] = arr[i];
        k += 1;
        i += 1;
    }
    while (j <= b)
    {
        a1[k] = arr[j];
        k += 1;
        j += 1;
    }
    for (i = a; i <= b; i++)
    {
        arr[i] = a1[i - a];
    }
}
void mergeSort(int arr[], int a, int b)
{

    if (a < b)
    {
        int c = (a + b) / 2;
        mergeSort(arr, a, c);
        mergeSort(arr, c + 1, b);
        merge(arr, a, c, b);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    int Itr;
    double avg = 0.000000;
    printf("Please enter the size of array:");
    scanf("%d", &n);
    printf("Enter the no of Iterations:");
    scanf("%d", &Itr);
    for (int i = 0; i < Itr; i++)
    {
        clock_t start, end;
        double cpu_time_used;
        start = clock();
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand();
        }
        printf("Array Before sorting\n");
        print(arr, n);
        mergeSort(arr, 0, n - 1);
        printf("\nArray after sort is\n");
        print(arr, n);
        end = clock();
        cpu_time_used = ((end - start)) / CLOCKS_PER_SEC;
        avg = (avg + cpu_time_used) / Itr;
    }
    printf("\nTime taken %f of %d Iteration", avg, Itr);
    return 0;
}