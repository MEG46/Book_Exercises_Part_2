#include <stdio.h>
#include <string.h>
#include <ctype.h>
void isEqual(char array[],char array1[]){
	int i=0;
	int j=0;
	int k=0;
	int check=1;
	char reverse[20];
	char reverse1[20];
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
   	return;
}
int main(){
	
	char array2[20];
	char array3[20];
	int i=0;
	int j=0;
	int k=0;
	int check=1;
	printf("Enter a character : ");
	scanf("%s",array2);
	printf("Enter a character : ");
	scanf("%s",array3);
	isEqual(array2,array3);
	return 0;
}