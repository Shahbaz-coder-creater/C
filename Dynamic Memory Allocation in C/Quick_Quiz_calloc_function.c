#include <stdio.h>
#include<stdlib.h>
int main(){
       int n;
       int* ptr;
       scanf("%d",&n);
       ptr = (int*)calloc(n,sizeof(int));
      ptr[0]=3;
      ptr[1]=2;
      ptr[2]=2;
      ptr[3]=6;
    printf("%d\t %d\t %d\t %d\t",ptr[0],ptr[1],ptr[2],ptr[3]);


    return 0;
}