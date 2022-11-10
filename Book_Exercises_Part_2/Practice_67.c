#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isEqual (char arr1[], char arr2[])  
{  
    // create two num arrays and initialize their value as 0  
    int num1[20] = {0}, num2[20] = {0}, i = 0;  
      
    // use while loop to check arr1 is not null  
    while (arr1[i] != '\0')  
    {  
        num1[arr1[i] -'a'||arr1[i] -'A']++;  
        i++;  
    }  
      
    i = 0;  
      
    // use while loop to check arr2 is not null  
    while (arr2[i] != '\0')  
    {  
        num2[arr2[i] -'a'||arr2[i] -'A']++;  
        i++;  
    }  
      
    for ( i = 0;i <20; i++)  
    {  
        if ( num1[i] != num2[i])  
            return 0;  
    }  
    return 1;  
}  

int main(){
	
	char arr1[20];
	char arr2[20];
	int count;
	printf("Enter a character : ");
	scanf("%s",arr1);
	printf("Enter a character : ");
	scanf("%s",arr2);
	count=isEqual(arr1,arr2);
	if (count == 1)  
    {  
        printf ("%s and %s strings are an anagram of each other. \n", arr1, arr2);  
    }  
    else  
    {  
        printf ("%s and %s strings are not an anagram of each other. \n", arr1, arr2);  
    }  
	return 0;
}