#include <stdio.h>
#define METER 8

int main(){
    char *ptr1, *ptr2;
    char string[]="karaman";
    for(ptr1 = string; *ptr1!='\0';ptr1++){
        for(ptr2 = ptr1; *ptr2!='\0';ptr2++){
        if(*ptr1==*ptr2)
          puts(ptr2);
    }
    }
    return 0;
}