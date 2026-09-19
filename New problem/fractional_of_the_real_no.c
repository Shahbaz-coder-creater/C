// take float input and print the fractional part of the reak number
#include <stdio.h>

int main(){
 
    float x  ;
    printf("enter the float number");
    scanf("%f",&x);

    int y = x ;
    printf("%d\n",y);
    
    float s = x - y ;
    printf("%f",s);


    return 0;
}