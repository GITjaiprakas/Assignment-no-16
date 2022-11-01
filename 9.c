#include<stdio.h>
int main(){
    int count_zero=0,count_nonzero=0,ary[10][10],n,i,j;
    printf("Enter the no of elements of a matrix in a row and coloumn (row and columns are of same size)F : ");
    scanf("%d",&n);
    printf("Enter the elements of a matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&ary[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ary[i][j]==0){
                count_zero++;
            }
            else{
                count_nonzero++;
            }
        }
    }
    if(count_zero > count_nonzero){
        printf("the matrix is a sparse matrix");
    }
    else{
        printf("the matrix is not a sparse matrix");
    }
    return 0;
}
