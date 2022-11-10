#include <stdio.h>
#include <string.h>
#include <ctype.h>
void call(char *str){
    char *ptr=str;
    while(*ptr!='\0'){
        if(*ptr>=97&&*ptr<=122){
            *ptr=toupper(*ptr);
        }
        ptr++;
    }
    
}
int main(){
char ds[]="kali linux c C java";
call(ds);
printf("%s",ds);
    return 0;
}
