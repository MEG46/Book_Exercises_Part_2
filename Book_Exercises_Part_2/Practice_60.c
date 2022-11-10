#include <stdio.h>
int fibS(int ar[],int n){
	int i,j;
	ar[0]=1;
	ar[1]=1;
	ar[2]=1;
	int sum=0;
	for(i=0;i<(n-3);i++){
		ar[i+3]=ar[i]+ar[i+1]+ar[i+2];
	}
	sum=ar[n-1];
	printf("%d.number of fibonacci series : %d\n",n,sum);
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