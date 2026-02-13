#include<stdio.h>

void rotate(int arr[], int n, int key){
    int temp[n];

    key = key % n;

    for(int i = 0; i < key; i++){
        temp[i] = arr[n - key + i];
    }

    for(int i = key; i < n; i++){
        temp[i] = arr[i - key];
    }

    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }

    printf("\n Rotated array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;

    printf("\n Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("\n Enter the value of key: ");
    scanf("%d", &key);

    rotate(arr, n, key);

    return 0;
}