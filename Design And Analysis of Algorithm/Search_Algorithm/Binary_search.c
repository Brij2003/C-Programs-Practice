#include <stdio.h>
#include <time.h>

int binary_search(int arr[], int f, int l, int num)
{
    if (l >= f)
    {
        int m = f + (l - f) / 2;
        if (arr[m] == num)
        {
            return m;
        }
        if (arr[m] < num)
        {
            m = m + 1;
            return binary_search(arr, m, l, num);
        }
        else
        {
            m = m - 1;
            return binary_search(arr, f, m, num);
        }
    }
    return -1;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
    bubblesort(arr, n);
    printf("Enter the number to search:");
    int num;
    scanf("%d", &num);
    int a = binary_search(arr, 0, n - 1, num);
    if (a != -1)
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