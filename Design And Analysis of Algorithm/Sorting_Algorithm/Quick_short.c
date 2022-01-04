#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int array[], int lower_bound, int upper_bound)
{
    int pivot = array[upper_bound];
    int end = (lower_bound - 1);
    int start = lower_bound;
    for (start ; start < upper_bound; start++)
    {
        if (array[start] <= pivot)
        {
            end++;
            swap(&array[end], &array[start]);
        }
    }
    swap(&array[end + 1], &array[upper_bound]);
    return (end + 1);
}

void quik_sort(int arr[], int lower_bound,int upper_bound)
{
    int end;
    if(lower_bound < upper_bound)
    {
        end = partition(arr, lower_bound, upper_bound);
        quik_sort(arr, lower_bound, end - 1);
        quik_sort(arr, end + 1, upper_bound);
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
        quik_sort(arr, 0, n - 1);
        printf("\nArray after sort is\n");
        print(arr, n);
        end = clock();
        cpu_time_used = ((end - start)) / CLOCKS_PER_SEC;
        avg = (avg + cpu_time_used) / Itr;
    }
    printf("\nAverage Time taken is %fs for %d number of Iteration", avg, Itr);
    return 0;
}