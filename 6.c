#include<stdio.h>
int main(){
    int ary[3][3]={{1,2,3},{4,5,6},{7,8,9}},i=0,j,sor,soc;
    while(i<3){
        sor=0;
        for(j=0;j<3;j++){
            sor=sor+ary[i][j];
        }
        printf("%d is the sum of %d row\n\n",sor,i+1);
        i++;
    }
    printf("\n");
    j=0;
    while(j<3){
        soc=0;
        for(i=0;i<3;i++){
            soc=soc+ary[i][j];
        }
        printf("%d is the sum of %d column\n\n",soc,j+1);
        j++;
    }
    return 0;
}
