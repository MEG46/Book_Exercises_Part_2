#include <stdio.h>
int sumAll(int ar[][5],int a,int b){
	int i,j,sum=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		sum = sum + ar[i][j];
	}
	}
	return sum;
}
void main(){
	int ar1[5][5];
	int k,l;
	int sum1=0;
	for(k=0;k<5;k++){
		for(l=0;l<5;l++){
			printf("Enter a number : ");
		    scanf("%d",&ar1[k][l]);
		    fflush(stdin);
	}
	}
	sum1=sumAll(ar1,5,5);
	printf("Sum : %d\n",sum1);
	return 0;
}