#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	
	char array[20];
	char array1[20];
	char reverse[20];
	char reverse1[20];
	char checked[20];
	int i=0;
	int j=0;
	int k=0;
	int check=1;
	printf("Enter a character : ");
	scanf("%s",array);
	printf("Enter a character : ");
	scanf("%s",array1);
	int number = strlen(array);
	int number1 = strlen(array1);
	if(number==number1){
		while(number>i){
		if(array[i]==toupper(array[i])){
		reverse[i]=tolower(array[i]);
	    }else{
	    reverse[i]=tolower(array[i]);
		}
		i++;
	    }
	    printf("first : %s\n",reverse);
	    while(number1>j){
		if(array1[j]==toupper(array1[j])){
		reverse1[j]=tolower(array1[j]);
	    }else{
	    reverse1[j]=tolower(array1[j]);
		}
		j++;
	    }
	    printf("second : %s\n",reverse1);
	    while(number>k){
	    	if(reverse[k]!=reverse1[k]){
	    		check=0;
	    		break;
			}
			k++;
		}
	}
	printf("Check : %d\n",check);
	return 0;
}