#include<stdio.h>

void search(int r, int c, int arr[r][c], int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key){
                printf("Element found at index : %d %d",i,j);
                return;
            }
        }
    }
    printf("No such elements exists in the matrix.");
    return;
}

int main(){
    int r,c;
    printf("\nEnter the rows of matrix :");
    scanf("%d",&r);
    printf("\nEnter the columns of matrix :");
    scanf("%d",&c);
    int arr[r][c];
    printf("\nEnter the elements of matrix :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int key;
    printf("Enter the element to be found :");
    scanf("%d",&key);
    search(r,c,arr,key);
    return 0;
}