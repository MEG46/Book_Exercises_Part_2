#include <stdio.h>
#include <stdlib.h>
void fill(int *arr,int num){
    int i;	
    for(i=0;i<num;i++){
    	printf("ar[%d] = ",i);
    	scanf("%d",&arr[i]);
	}
}
void odd(int *arr,int *rev,int num){
    int i;	
    int j=0;
    for(i=0;i<num;i++){
    if(arr[i]%2!=0){
    	rev[j]=arr[i];
    j++;
	}
	}
}
void even(int *arr,int *rev,int num){
    int i;	
    int j=0;
    for(i=0;i<num;i++){
    if(arr[i]%2==0){
    	rev[j]=arr[i];
    j++;
	}
	}
}
void prin(int *arr){
    int i=0;	
    while(arr[i]!='\0'){
         printf("%d\t",arr[i]);
         i++;
	}
}
int main(){
  int num;
  printf("Please enter the number of elements in the array : ");
  scanf("%d",&num);
  int *ar;
  int *ar1;
  int *ar2;	
  ar=(int *)calloc(num,sizeof(int));
  ar1=(int *)calloc(num,sizeof(int));
  ar2=(int *)calloc(num,sizeof(int));
  fill(ar,num);
  printf("\n\n----------------------------------------------------\n\n");
  printf("\n\nArray:\n\n");
  prin(ar);
  printf("\n\n----------------------------------------------------\n\n");  
  printf("\n\nOdd Numbers:\n\n");
  odd(ar,ar1,num);
  prin(ar1);
  printf("\n\n----------------------------------------------------\n\n"); 
  printf("\n\nEven Numbers:\n\n");
  even(ar,ar2,num);
  prin(ar2);
  printf("\n\n----------------------------------------------------\n\n"); 
  free(ar);
  free(ar1);
  free(ar2);
  return 0;
}