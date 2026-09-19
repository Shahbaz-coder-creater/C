#include <stdio.h>
   
   int sum(int* , int*);

  int sum( int *a  , int *b ){
    *a = 6 ; // The sum function cannot change x because copy of x is provided to sum in a
    return *a + *b;
  }
int main(){
    int x = 1 , y = 2;
   printf("The sum of  1 and 2 is %d\n " , sum(&x ,&y));
   printf("The value of x is %d" , x);

    return 0;
}