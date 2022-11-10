#include <stdio.h>
int diagoSum(int ar[][5]){
	int i,j;
	int sum=0;
		for(i=0;i<5;i++){
		    for(j=0;j<5;j++){
		    	if(i==j){
		    		sum = sum + ar[i][j];
				}
	   }
	}
	return sum;
}
int diagoSum1(int ar[][5]){
	int i,j;
	int sum1=0;
		for(i=0;i<5;i++){
		    for(j=0;j<5;j++){
		    	if(i==(5-j)){
		    		sum1 = sum1 + ar[i][5-j];
				}
	   }
	}
	return sum1;
}
int main(){
	int ar1[5][5];
	int i,l;
	int result,result1=0;
	for(i=0;i<5;i++){
		for(l=0;l<5;l++){
			printf("Enter a number : ");
			scanf("%d",&ar1[i][l]);
			fflush(stdin);
		}
	}
	result=diagoSum(ar1);
	result1=diagoSum1(ar1);
	printf("Left To Right Diogonal Sum : %d\n",result);
	printf("Right To Left Diogonal Sum : %d\n",result1);
	return 0;
}