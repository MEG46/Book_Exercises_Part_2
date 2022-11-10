#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	
	char array[20];
	char reverse[20];
	int i;
	printf("Enter a character : ");
	scanf("%s",array);
	int number = strlen(array);
	while(number>i){
		reverse[i]=toupper(array[i]);
		i++;
	}
	printf("Upper : %s\n",reverse);
	return 0;
}