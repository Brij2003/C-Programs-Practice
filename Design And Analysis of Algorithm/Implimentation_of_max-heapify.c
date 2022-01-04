#include <stdio.h>
#include <time.h>
void swap(int a,int b)
{
    int t = a;
    a = b;
    b = t;
}
int max_heapify(int arr[],int n, int i)
{
    int largest = i;
    int left = (i * 2) + 1;
    int right = (i * 2) + 2;
    while ((left < n) && (arr[largest] < arr[left]))
    {
        largest = left;
    }
    while ((right < n) && (arr[largest] < arr[right]))
    {
        largest = right;
    }
    if(largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        max_heapify(arr, n, largest);
    }    
}
void built_max_heap(int arr[],int n)
{
    int non_leaf_index = (n / 2) - 1;
    for (int i = non_leaf_index; i >= 0; i--)
    {
        max_heapify(arr, n, i);
    }
}
void insertion (int arr[],int n,int value)
{
    n = n + 1;
    arr[n - 1] = value;
    max_heapify(arr, n, n - 1);
}
void deletion(int arr[], int n)
{
    int end = arr[n - 1];
    arr[0] = end;
    n = n - 1;
    max_heapify(arr, n, 0);
}
void heap_sort(int arr[], int n)
{
    built_max_heap(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        int t = arr[0];
        arr[0] = arr[i];
        arr[i] = t;
        max_heapify(arr, i, 0);
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
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    printf("Enter the size of Array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    printf("Array is\n");
    print(arr, n);
    heap_sort(arr, n);
    printf("\nArray After building max heap\n");
    print(arr, n);
    end = clock();
    cpu_time_used = ((end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken %f", cpu_time_used);
    return 0;
}