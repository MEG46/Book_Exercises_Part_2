#include <stdio.h>
#include <stdlib.h>
void fill(int *arr, int num){
	int i;
	for(i=0;i<num;i++){
		printf("Ar[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}
void fill1(int *arr,int *arr1,int *arr2, int num2){
	int i=0;
	arr2[i]=arr[i];
	arr2[i+1]=arr1[i];
	arr2[i+2]=arr2[i]+arr2[i+1];
}
void prin(int *arr, int num){
	int i;
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int num,num1;
	printf("Please the number of elements in the array : ");
	scanf("%d",&num);
	int *ar;
	int *ar1;
	int *ar2;
	int num2;
	int i;
	ar=(int *)malloc(sizeof(int)*num);
	fill(ar,num);
	printf("\n\n-----------------------------------------------------\n\n");
	printf("\n\nArray 1 :\n\n");
	prin(ar,num);
	printf("\n\n-----------------------------------------------------\n\n");
	printf("Please the number of elements in the array : ");
	scanf("%d",&num1);
	ar1=(int *)malloc(sizeof(int)*num);
	fill(ar1,num1);
	printf("\n\n-----------------------------------------------------\n\n");
	printf("\n\nArray 2 :\n\n");
	prin(ar1,num1);
	printf("\n\n-----------------------------------------------------\n\n");
	num2=num+num1+1;
	ar2=(int *)malloc(sizeof(int)*num2);
	printf("\n\n-----------------------------------------------------\n\n");
	printf("\n\nArray 3 :\n\n");;
	printf("\n\n-----------------------------------------------------\n\n");
	fill1(ar,ar1,ar2,num2);
	prin(ar2,num2);
	free(ar);
	return 0;
	
}