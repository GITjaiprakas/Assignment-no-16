#include<stdio.h>
int main(){
	int A[3][3] = {{1, 1, 1},{2, 2, 2},{3, 3, 3}};
	int B[3][3] = {{2, 1, 3},{2, 4, 2},{5, 3, 3}};
	int C[3][3]; 
	int i, j;
	for (i=0;i<3;i++){
        for (j=0;j<3;j++)
			C[i][j]=A[i][j]+B[i][j];
    }
	printf("Result matrix is \n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++)
		printf("%d ",C[i][j]);
		printf("\n");
	}
	return 0;
}
