#include <stdio.h>

int main(){
    
   char i = 'A'; 
   char*j = &i ; // j is pointer pointing to i (j is an intger pointer)
   float k = 5.456;
   float *k1 = &k;
    printf("the address of i  %p\n" , &i);
    printf("the address of j  %p\n" , &j);
    printf("the address of k  %p\n" , &k);

    printf("the address of j  %d\n" , *(&i));
    return 0;
}
    
