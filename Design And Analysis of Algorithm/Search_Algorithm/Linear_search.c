#include <stdio.h>
#include <time.h>
int linear_search(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            return i;
        }
    }
    return 0;
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
    printf("Enter the number to search:");
    int num;
    scanf("%d", &num);
    int a = linear_search(arr, n,  num);
    if(a != 0)
    {
        printf("Element %d index is %d", num, a);
    }
    else
    {
        printf("Element %d not found", num);
    }
    end = clock();
    cpu_time_used = ((end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken %f", cpu_time_used);
    return 0;
}