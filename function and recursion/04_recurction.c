#include <stdio.h>

  int factorial ( int );
 /* factorial(5) 
    = 5 × factorial(4)
    = 5 × 4 × factorial(3)
    = 5 × 4 × 3 × factorial(2)
    = 5 × 4 × 3 × 2 × factorial(1)
    = 5 × 4 × 3 × 2 × 1
    = 120
*/
 
 int factorial( int n){
    if (n==0 || n==1){  // Base Condition
        return 1;
    }
    return factorial(n-1)*n; // factorial formula is (factorial(n)=factorial(n-1)*n) {and Recusive case}
 }
int main(){
    int a=5;
    printf("the factorial of %d is %d", a , factorial(a));
 
    return 0;
}