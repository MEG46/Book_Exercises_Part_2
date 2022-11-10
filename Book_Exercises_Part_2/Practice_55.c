#include <stdio.h>
int diagoSum(int ar[][5]){
	int smlnum=ar[0][0];
	int i,j;
		for(i=0;i<5;i++){
		    for(j=0;j<5;j++){
		    	if(i==j&&smlnum>ar[i][j]){
		        smlnum=ar[i][j];
                }
		   }
	   }
	return smlnum;
}
int diagoSum1(int ar[][5]){
	int smlnum1=ar[0][4];
	int i,j;
	    for(i=0;i<5;i++){
		    for(j=5-i;j<5;j++){
		    	if(i==(5-j)&&smlnum1>ar[i][5-j]){	
		    	smlnum1=ar[i][5-j];
				}
	   }
	}
	return smlnum1;
}
int diagoSum2(int ar[][5]){
	int bgnum=ar[0][0];
	int i,j;
		for(i=0;i<5;i++){
		    for(j=0;j<5;j++){
		    	if(i==j&&bgnum<ar[i][j]){
		        bgnum=ar[i][j];
                }
		   }
	   }
	return bgnum;
}
int diagoSum3(int ar[][5]){
	int bgnum1=ar[0][4];
	int i,j;
	    for(i=0;i<5;i++){
		    for(j=5-i;j<5;j++){
		    	if(i==(5-j)&&bgnum1<ar[i][4-i]){	
		    	bgnum1=ar[i][4-i];
				}
	   }
	}
	return bgnum1;
}
int main(){
	int ar1[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int i,l;
	int result,result1=0;
	int result2,result3=0;
	result=diagoSum(ar1);
	result1=diagoSum1(ar1);
	result2=diagoSum2(ar1);
	result3=diagoSum3(ar1);
	printf("Smallest Number in Right To Left Diogonal : %d\n",result);
	printf("Smallest Number in Left To Right Diogonal : %d\n",result1);
	printf("Biggest Number in Right To Left Diogonal : %d\n",result2);
	printf("Biggest Number in Left To Right Diogonal : %d\n",result3);
	return 0;
}