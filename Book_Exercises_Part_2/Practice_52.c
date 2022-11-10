#include <stdio.h>
int smAll(int ar[][5],int a,int b){
	int smlnum=ar[a][0];
	int i;
	for(i=1;i<a;i++){
		if(smlnum>ar[a][i]){
 		  smlnum=ar[a][i]; 
		}
}
	return smlnum;
}
int smAll1(int ar[][5],int a,int b){
	int smlnum1=ar[0][b];
	int i;
	for(i=1;i<b;i++){
		if(smlnum1>ar[i][b]){
 		  smlnum1=ar[i][b]; 
		}	
}
	return smlnum1;
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
	sum1=smAll(ar1,0,4);
	sum2=smAll(ar1,1,4);
	sum3=smAll(ar1,2,4);
	sum4=smAll(ar1,3,4);
    sum5=smAll(ar1,4,4);
    sum6=smAll1(ar1,4,0);
	sum7=smAll1(ar1,4,1);
	sum8=smAll1(ar1,4,2);
	sum9=smAll1(ar1,4,3);
    sum10=smAll1(ar1,4,4);
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