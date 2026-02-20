#include<stdio.h>
int transpose(int r, int c, int arr[r][c]){
    printf("The transpose of the matrix is :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
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
    transpose(r,c,arr);
    return 0;
}