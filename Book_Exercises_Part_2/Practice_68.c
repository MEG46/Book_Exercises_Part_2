#include <stdio.h>
#include <string.h>
#include <ctype.h>
int arrw(char array[],int number){
	char g;
	int c=number-1;
	int i=0;
	int j;
	int k;
	int counter=0;	
	while(c>0){
	
	   for(j=0;j<(number-1);j++){
	
	if((int)(array[j])>=(int)(array[j+1])){
		  g=array[j+1];
		  array[j+1]=array[j];
		  array[j]=g;
		  	
		}
	}
	c--;
    }
    while(number>i){
		if(array[i]>=64&&array[i]<=90){
		  array[i]=tolower(array[i]);
		  	
		}
		i++;
	}
	for(k=0;k<number-1;k++){
		if(array[k]!=array[k+1]){
			printf("%c ",array[k+1]);
			counter++;
		}
	}
	/*
    for(j=number-1;0<j;j--){
	
	if((int)(array[j])<=(int)(array[j-1])){
		  g=array[j-1];
		  array[j-1]=array[j];
		  array[j]=g;
		  	
		}
	}
	
	for(j=number-1;0<j;j--){
	
	if((int)(array[j])<=(int)(array[j-1])){
		  g=array[j-1];
		  array[j-1]=array[j];
		  array[j]=g;
		  	
		}
	}
	*/
	return 0;
}
int main(){
	char arr1[20];
	printf("enter a string : ");
	scanf("%s",arr1);
	fflush(stdin);
	int number1=strlen(arr1);
	arrw(arr1,number1);
	return 0;
}