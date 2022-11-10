#include <stdio.h>
int fibS(int ar[],int n){
	int i,j;
	ar[0]=1;
	ar[1]=1;
	for(i=0;i<(n-2);i++){
		ar[i+2]=ar[i]+ar[i+1];
	}
	printf("Series : ");
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	return 0;
}
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int ar1[num];
	int sum=0;
	sum=fibS(ar1,num);
	printf("",sum);
    return 0;
}