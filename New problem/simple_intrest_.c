#include <stdio.h>

int main(){

float p , t , r ;
printf("enter the percentage = ");
scanf("%f" , &p);

printf("enter the time = ");
scanf("%f" , &t);

printf("enter the rate = ");
scanf("%f" , &r);
 
float si = (p*r*t) / 100;
printf("simple intrerset %f = "  , si);
    return 0;
}