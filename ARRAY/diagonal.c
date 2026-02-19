#include<stdio.h>

void diagonal(int n, int mat[n][n]){
    int rightdiasum=0,leftdiasum=0;
    int i;
    for(i=0;i<n;i++){
        leftdiasum+=mat[i][i];
        rightdiasum+=mat[i][n-1-i];
    }
    if(rightdiasum<leftdiasum){
        printf("\nLeft Diagonal :");
            for(i=0;i<n;i++){
                printf("%d\t",mat[i][i]);
            }
    }
    else{
        printf("\nRight diagonal :");
            for(i=0;i<n;i++){
                printf("%d\t",mat[i][n-1-i]);
            }
    }
}


int main(){
    int n;
    printf("\nEnter the size of matrix :");
    scanf("%d",&n);
    int mat[n][n];

    printf("\nEnter the elements of matrix :");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&mat[i][j]);
        }
    }
    diagonal(n,mat);
    return 0;
}