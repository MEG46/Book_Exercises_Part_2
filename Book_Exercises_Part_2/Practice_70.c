#include <stdio.h>
int main(void){
    int *ptr;
    int num=15;
    ptr = &num;
    ptr=&ptr;
    printf("Pointer : %p\n",ptr);
    printf("Value : %p",*ptr);
    return 0;
}