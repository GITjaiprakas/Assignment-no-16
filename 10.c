#include<stdio.h>
int main(){
    int ary[4][4]={{1,1,0,0},{1,0,0,0},{1,1,1,1},{1,1,1,0}},row,i,j,count,gre=0;
    for(i=0;i<4;i++){
        count=0;
        for(j=0;j<4;j++){
            if(ary[i][j]==1){
                count++;
            }
        }
        if(i%2){
            if(count>gre){
                gre=count;
                row=i;
            }
        }
        else{
            if(count>gre){
                gre=count;
                row=i;
            }  
        }
    }
    printf("row number %d has the highest 1's",row+1);
    return 0;
}
