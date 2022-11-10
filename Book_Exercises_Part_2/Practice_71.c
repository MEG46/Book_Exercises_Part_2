#include <stdio.h>
int main(void){
    int *ptr,*ptr1;
    int num=15;
    int num1=20;
    ptr = &num;
    ptr1=&num1;
    printf("Number 1+ Number 2 = %d",(*ptr+*ptr1));
    
    return 0;
}