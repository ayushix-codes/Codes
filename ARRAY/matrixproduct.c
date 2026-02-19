#include<stdio.h>

void product(int r,int c, int n, int mat1[r][c],int mat2[c][n]){
    int product[r][n];
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){
            product[i][j]=0;
            for(int k=0;k<c;k++){
                product[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("\nThe product of the given two matrix is :");
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){
                printf("%d\t",product[i][j]);
        }
    }
}

int main(){
    int r,c;
    // Input for matrix 1 
    printf("\nEnter the rows of matrix 1:");
    scanf("%d",&r);
    printf("\nEnter the columns of matrix 1:");
    scanf("%d",&c);
    int mat1[r][c];
    printf("\nEnter the elements of matrix 1:");
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&mat1[i][j]);
        }
    }
    // Input for matrix 2
    printf("\nThe row of matrix 2 is taken as : %d", c);
    int n;
    printf("\nEnter the column of matrix 2:");
    scanf("%d",&n);
    int mat2[c][n];
    printf("\nEnter the elements of matrix 2:");
    for(i=0;i<c;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    // Calling function
    product(r,c,n,mat1,mat2);
    return 0;
}