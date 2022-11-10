#include <stdio.h>
#include <stdlib.h>
void fill(int *ar,int num){
	int i;
	for(i=0;i<num;i++){
		printf("Ar[%d] = ",i);
		scanf("%d",&ar[i]);
	}
}	
void IsPrime(int *ar,int *ar1,int num){
	int j=0;
	int d=0;
	int k;
	int flag=0;
	for(k=0;k<num;k++){
		flag=0;
		if(ar[k]==0||ar[k]==1){
			flag=1;
		}
		    for(j=2;j<ar[k];j++){
			    if(ar[k]%j==0){
			       flag=1;
			        break;
				}
				}
				
				    if(flag==0){
				 	  ar1[d]=ar[k];
				 	  d++;
				 	  
				}
			}
	int i;
	for(i=0;i<d;i++){
		printf("%d\t",ar1[i]);
	}
}
void prin(int *ar,int num){
	int i;
	for(i=0;i<num;i++){
		printf("%d\t",ar[i]);
	}
}
int main(){
	int num;

	printf("Please enter a number : ");
	scanf("%d",&num);
	int *arr;
	int *arr1;
	arr=(int *)malloc(sizeof(int)*num);
	arr1=(int *)malloc(sizeof(int)*num);
	fill(arr,num);
	printf("\n\n----------------------------------------------\n\n");
	printf("\n\nArray\n\n");
	printf("\n\n----------------------------------------------\n\n");
	prin(arr,num);
	printf("\n\n----------------------------------------------\n\n");
	printf("\n\nPrime Numbers :\n\n");
	printf("\n\n----------------------------------------------\n\n");
	IsPrime(arr,arr1,num);
	free(arr);
	free(arr1);
	return 0;
}