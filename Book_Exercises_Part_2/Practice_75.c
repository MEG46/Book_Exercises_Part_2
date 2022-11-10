#include <stdio.h>
#include <string.h>
#include <ctype.h>
int call(char* string,char* string1)
{    
    int num1[20] = {0}, num2[20] = {0}, i = 0;  
    char *ptr=string;
    char *rev=string1;
 
  while (*ptr != '\0')  
    {  
        num1[*ptr -'a']++;  
        ptr++;  
    }  
    // use while loop to check arr2 is not null  
    while (*rev != '\0')  
    {  
        num2[*rev -'a']++;  
        rev++;  
    }  
    for ( i = 0;i <20; i++)  
    {  
        if ( num1[i]!= num2[i])  
            return 0;  
    }  
    return 1;  
}  
int main(){
char *ds="ala";
char *ds1="laa";
int count=0;
  count = call(ds,ds1);  
      
    // use if-else statement to validate both strings are anagram or not.  
      
    if (count == 1)  
    {  
        printf (" %s and %s strings are an anagram of each other. \n", ds, ds1);  
    }  
    else  
    {  
        printf (" %s and %s strings are not an anagram of each other. \n", ds, ds1);  
    }  
call(ds,ds1);
    return 0;
}