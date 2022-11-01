#include<stdio.h>
void transpose(int arr[][3]){
    int j=0,i;
    printf("transpose of a matrix is\n"); 
    while(j<3){
        for(i=0;i<3;i++){
            printf("%d ",arr[i][j]);
        }
        j++;
        printf("\n");
    }
}
int main(){
    int ary[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
    printf("before transpose of a matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",ary[i][j]);
        }
        printf("\n");
    }
    transpose(ary);
    return 0;
}
