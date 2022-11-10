#include <stdio.h>
int IsPrime(int *num){
    int flag=0;
    int i=0;
    int m=*num/2;    
   for(i=2;i<=m;i++)    
{    
if(*num%i==0)    
{    
printf("%d is not prime",*num);    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("%d is prime",*num);     
return 0;  
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    IsPrime(&num);
    return 0;
}