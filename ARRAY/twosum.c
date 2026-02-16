#include<stdio.h>

int twosum(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
        printf("{%d , %d}", arr[i], arr[j]);
         }
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter the elements of the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target : ");
    scanf("%d", &target);
    twosum(arr,n,target);
}