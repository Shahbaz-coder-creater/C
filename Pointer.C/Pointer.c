#include <stdio.h>

int main(){

    int i = 72; 
    int *j = &i ; // j is pointer pointing to i (j is an intger pointer)
    int k = 23;
    printf("the address of i  %p\n" , &i);
    printf("the address of j  %p\n" , &j);
    printf("the address of k  %p\n" , &k);

    printf("the address of j  %d\n" , *(&i));
    return 0;
}