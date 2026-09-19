#include <stdio.h>
  float force(float );

  float force(float mass ){
  
  return mass*9.8;
  }
int main(){
int m = 34;
   printf("the value of force is %.3f\n" , force(m));
    return 0;
}