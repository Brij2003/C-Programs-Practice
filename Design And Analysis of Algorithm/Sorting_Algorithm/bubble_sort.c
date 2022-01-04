#include <stdio.h>
#include <time.h>

void bubblesort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
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

	printf("Please enter the size of array:");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
	printf("Array Before sorting\n");
	print(arr, n);
	printf("\nArray after sort is\n");
	for (int i = 0; i < n;i++)
	{
		printf("%d ", arr[i]);
	}
	end = clock();
	cpu_time_used = ((end - start)) / CLOCKS_PER_SEC;
	printf("\nTime taken %f", cpu_time_used);
	return 0;
}