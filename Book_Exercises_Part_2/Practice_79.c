#include <stdio.h>
#include <stdlib.h>
void enter(double *arr, int num){
	int i;
	for(i=0;i<num;i++){
		printf("Please enter ar[%d] = ",i);
		scanf("%lf",&arr[i]);
	}
}
void prin(double *arr, int num){
	int i;
	for(i=0;i<num;i++){
		printf("%.2lf\t",arr[i]);
	}
}
void sum(double *arr, int num){
	int i;
	double result=0.00;
	for(i=0;i<num;i++){
		result+=arr[i];
	}
	result=result/num;
	printf("Average of the numbers : %.2lf",result);
}
void three(double *arr, int num){
	int i;
	double result=0.00;
	for(i=0;i<num;i++){
		result+=arr[i];
	}
	result=result/num;
	printf("The Approaching Numbers to Average of numbers: %d\t%d\t%d\t",(int)result,(int)result-1,(int)result+1);
}
int main(){
	int num;
	printf("Please enter the number of elements in the desired array : ");
	scanf("%d",&num);
	double *ar;
	ar=(double *)malloc(sizeof(double)*num);
	enter(ar,num);
	printf("\n\n-----------------------------------------------------------------\n\n");
	printf("\n\nArray:\n\n");
	prin(ar,num);
	printf("\n\n-----------------------------------------------------------------\n\n");
	printf("\n\n-----------------------------------------------------------------\n\n");
    sum(ar,num);
	printf("\n\n-----------------------------------------------------------------\n\n");
    printf("\n\n-----------------------------------------------------------------\n\n");
    three(ar,num);
	printf("\n\n-----------------------------------------------------------------\n\n");
	free(ar);
	return 0;
}