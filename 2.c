#include<stdio.h>
void matrixmul(int ,int ,int ,int ,int arr[][10],int ary[][10]);
int main(){
    int arr[10][10],ary[10][10],arows,acolumns,brows,bcolumns,i,j;
    printf("Enter the rows and columns of the first matrix : ");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter the elements of the first array : ");
    for(i=0;i<arows;i++){
        for(j=0;j<acolumns;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the rows and columns of the second array : ");
    scanf("%d %d",&brows,&bcolumns);
    printf("Enter the elements of the second array : ");
    for(i=0;i<brows;i++){
        for(j=0;j<bcolumns;j++){
            scanf("%d",&ary[i][j]);
        }
    }
	if(brows!=acolumns){
		printf("sorry the multiplication of matrix is not possible");
	}
	else{
        matrixmul(arows,brows,acolumns,bcolumns,arr,ary);
    }
    return 0;
}
void matrixmul(int arows,int brows,int acolumns,int bcolumns,int arr[][10],int ary[][10]){
int i,j,k,pro[arows][bcolumns],sum=0;
for(i=0;i<arows;i++){
            for(j=0;j<bcolumns;j++){
                for(k=0;k<brows;k++){
                    sum+=arr[i][k]*ary[k][j];
                }
                pro[i][j]=sum;
                sum=0;
            }
		}
		printf("the resultant matrix is : \n");
        for(i=0;i<arows;i++){
            for(j=0;j<bcolumns;j++){
                printf("%d ",pro[i][j]);
            }
            printf("\n");
        }
}
