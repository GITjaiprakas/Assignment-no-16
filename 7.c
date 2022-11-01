#include<stdio.h>
int main(){
    int ary[5][5]={{11,21,31,41,51},{61,72,84,92,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}},i=0,j;
    while(i<5){
        for(j=0;j<5;j++){
            if(i<j)
            ary[i][j]=0;
        }
        i++;
    }
    i=0;
    while(i<5){
        for(j=0;j<5;j++){
            if(ary[i][j]==0)
            printf("%d  ",ary[i][j]);
            else{
                printf("%d ",ary[i][j]);
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
