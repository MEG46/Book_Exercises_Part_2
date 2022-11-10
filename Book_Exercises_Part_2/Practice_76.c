#include <stdio.h>
#define METER 8

int main(){
    int i, *ptr;
    int dizi[METER] = {7,6,5,3,2,1,0};
    ptr = dizi;
    
    for(i = 0; i<METER;i++){
        ptr[i]=dizi[*(ptr+i)];
    }
    for(i=0;i<METER;i++){
        printf("%d ",dizi[i]);
    }
    return 0;
}
