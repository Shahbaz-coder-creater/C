#include <stdio.h>
#include <stdlib.h>

int main(){
 float n ;
 float* ptr;
 printf("Enter your size of memory - : ");
 scanf("%d",&n);
 ptr = (float*) malloc(n * sizeof(float));
//  int arr[5]; Not allowed in c
 ptr [0] = 4.45;
 ptr [1] = 1.45;
 ptr [2] = 2.45;
 ptr [3] = 3.45;
 ptr [4] = 4.45;
 printf("%.2f\t",ptr[0]);
 printf("%.2f\t",ptr[1]);
 printf("%.2f\t",ptr[2]);
 printf("%.2f\t",ptr[3]);
 printf("%.2f\t",ptr[4]);
    return 0;
}