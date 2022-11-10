#include <stdio.h>
int sumAll(int ar[][5],int a,int b){
	int j,k;
	int sum=0;
	for(k=0;k<b;k++){
		sum = sum + ar[a][k];
	}
	return sum;
}
int sumAll1(int ar[][5],int a,int b){
	int j,k;
	int sum0=0;
	for(k=0;k<a;k++){
		sum0 = sum0 + ar[k][b];
	}
	return sum0;
}
int main(){
	int ar1[5][5];
	int sum1,sum2,sum3,sum4,sum5=0;
	int sum6,sum7,sum8,sum9,sum10=0;
	int i,l;
	for(i=0;i<5;i++){
		for(l=0;l<5;l++){
			printf("Enter a number : ");
			scanf("%d",&ar1[i][l]);
			fflush(stdin);
		}
	}
	sum1=sumAll(ar1,0,5);
	sum2=sumAll(ar1,1,5);
	sum3=sumAll(ar1,2,5);
	sum4=sumAll(ar1,3,5);
    sum5=sumAll(ar1,4,5);
    sum6=sumAll1(ar1,5,0);
	sum7=sumAll1(ar1,5,1);
	sum8=sumAll1(ar1,5,2);
	sum9=sumAll1(ar1,5,3);
    sum10=sumAll1(ar1,5,4);
    printf("1.indis : ");
	printf("%d\n",sum1);
	printf("2.indis : ");
	printf("%d\n",sum2);
	printf("3.indis : ");
	printf("%d\n",sum3);
	printf("4.indis : ");
	printf("%d\n",sum4);
	printf("5.indis : ");
	printf("%d\n",sum5);
	printf("1.layer : ");
	printf("%d\n",sum6);
	printf("2.layer : ");
	printf("%d\n",sum7);
	printf("3.layer : ");
	printf("%d\n",sum8);
	printf("4.layer : ");
	printf("%d\n",sum9);
	printf("5.layer : ");
	printf("%d\n",sum10);
	
	return 0;
}