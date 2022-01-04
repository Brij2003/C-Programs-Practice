#include <stdio.h>
void traverse(int arr[], int len)
{
    for (int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
}

void reverse(int arr[], int len){
    for (int i = 0; i <= len/2; i++)
    {
        int a = arr[i];
        arr[i] = arr[len - i];
        arr[len - i] = a;
    }
}

int main() 
{
    int arr[] = {1,2,3,4,5,6};
    int len = 6;

    traverse(arr, len);
    reverse(arr, len-1);
    printf("\n");
    traverse(arr, len);
    
}
