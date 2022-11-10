#include <stdio.h>
#include <string.h>
#include <ctype.h>
void isEqual(char array[]){
	char reverse[20];
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int m=0;
	int check=1;
	int number = strlen(array);
	while((number/2)>i){
		if(array[i]==toupper(array[i])){
		reverse[i]=tolower(array[i]);
	    }else{
	    reverse[i]=tolower(array[i]);
		}
		i++;
	    }
	    printf("first : %s\n",reverse);
	    while((number)<((number/2)+j)){
		if(array[(number/2)+j]==toupper(array[(number/2)+j])){
		reverse[(number/2)+j]=tolower(array[(number/2)+j]);
	    }else{
	    reverse[(number/2)+j]=tolower(array[(number/2)+j]);
		}
		j++;
	    }
	    printf("second : %s\n",reverse);
	    while((number)>l){
		if(array[l]==toupper(array[l])){
		reverse[l]=tolower(array[l]);
	    }else{
	    reverse[l]=tolower(array[l]);
		}
		l++;
	    }
	    while(number>m){
	    	reverse[m]=array[m];
			m++;
		}
	    printf("third : %s\n",reverse);
	    while(number>k){
	    	if(reverse[k]!=array[k]){
	    		check=0;
	    		break;
			}
			k++;
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

	printf("Enter a character : ");
	scanf("%s",array2);
	isEqual(array2);
	return 0;
}