#include <stdio.h>

void create(int arr[], int n){
    int i = 0;
    while(i < n){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
        i++;
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int size = 5;
    int arr[size];
    create(arr,size);
    print(arr, size);
}