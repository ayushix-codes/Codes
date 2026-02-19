#include<stdio.h>

int printarray( int r, int c, int arr[r][c]){
    printf("\nThe matrix in row major order :");
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    printf("\nThe matrix in column major order :");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",arr[j][i]);
        }
    }
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
    printarray(r,c,arr);
}