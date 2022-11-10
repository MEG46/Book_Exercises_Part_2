#include <stdio.h>
int factC(int n){
	int sum=1;
	if(n==1||n==0){
		printf("1\n");
	}
	if(n<0){
		sum=-1;
		}
	while(n>1){
		sum*=n;
		n--;	
		}
	return sum;
}
int main(){
	int num;
	int fact=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	fact=factC(num);
	printf("Factorial of %d : %d\n",num,fact);
	return 0;
}