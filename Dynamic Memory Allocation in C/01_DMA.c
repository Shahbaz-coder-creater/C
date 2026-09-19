#include <stdio.h>
#include<stdlib.h>

int main(){
int n ;
int *ptr;
printf("enter your size of ptr - : ");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
ptr[0]=4;
ptr[2]=6;
ptr[3]=5;
ptr[4]=8;
printf("%d\t %d\t %d\t %d\t", ptr[0],ptr[1],ptr[2],ptr[3]);
    return 0;
}