#include<stdio.h>

int sortarray(int arr[], int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int missnum(int arr[], int n){
    sortarray(arr,n);
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i+1] - arr[i] > 1){
            return arr[i]+1;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int miss = missnum(arr,n);
    if(miss != -1){
        printf("The missing number is : %d",miss);
    }
    else{
        printf("No missing number found in the array");
    }
}