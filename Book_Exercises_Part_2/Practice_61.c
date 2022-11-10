#include <stdio.h>
#include <string.h>
int main(){
	char array[20];
	char reverse[20];
	int i=0;
	printf("Please enter a character : ");
	scanf("%s",array);
	int number = strcspn(array,"\0");
	while((number)>i){
		reverse[i]=array[(number-1)-i];
		i++;
	}
	printf("Reverse : %s\n",reverse);
	return 0;
}