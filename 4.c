#include<stdio.h>
int main(){
    int ary[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,sum=0;
    while(j<3){
        for(i=0;i<3;i++){
            if(i+j==2)
            sum=sum+ary[i][j];
        }
        j++;
    }
    printf("%d",sum);
    return 0;
}
