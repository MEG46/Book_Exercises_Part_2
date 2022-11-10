#include <stdio.h>
 int main(){
     int i;
     char *ptr,arr[12] = "heryonuylec";
     ptr = arr;
     for(i=0;i<4;i++)
         *(ptr++) = arr[i + 7];
     
     
     for(i=0;i<4;i++)
         arr[i] = *(ptr++);
     
     puts(arr);
     puts(ptr);
     return 0;
 }
