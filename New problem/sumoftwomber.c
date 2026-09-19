#include <stdio.h>

int main(){
   int a , b ; // a>b
   printf("enter the Dividend a = ");
   scanf(" %d",&a );

   printf("enter the Divisor b = ");
   scanf(" %d",&b );

//    int q = a/b;
// //    printf("quesiant %d\n" , q);

//    int r = a - (b*q);
//    printf("raminder is = %d " , r);

   int r = a % b;
   printf("raminder is = %d " , r);
    return 0;

}
