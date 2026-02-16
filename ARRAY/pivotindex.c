#include<stdio.h>

int leftsum(int arr[], int pivot, int n){
    int leftsm = 0;
    for(int i = 0; i < pivot; i++){
        leftsm += arr[i];
    }
    return leftsm;
}

int rightsum(int arr[], int pivot, int n){
    int rightsm = 0;
    for(int i = pivot + 1; i < n; i++){
        rightsm += arr[i];
    }
    return rightsm;
}

int pivotindex(int arr[], int pivot, int n){
    int leftsm = leftsum(arr, pivot, n);
    int rightsm = rightsum(arr, pivot, n);
    
    if(leftsm == rightsm){
        return arr[pivot];
    }
    return -1;
}

int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int found = -1;

    for(int i = 0; i < n; i++){
        int pivotIdx = pivotindex(arr, i, n);

        if(pivotIdx != -1){
            found = pivotIdx;
            break;
        }
    }

    if(found == -1){
        printf("No such element exists.");
    }
    else{
        printf("The pivot element is : %d", found);
    }

    return 0;
}
