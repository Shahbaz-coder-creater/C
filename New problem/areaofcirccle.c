#include <stdio.h>
#include<math.h>

    int main(){

    int r ;
    
     printf("enter the radious") ;
     scanf("%d" , &r);

     float area_of_circle;
     area_of_circle = M_PI * r * r ;

     printf("area_of_circle %f" ,area_of_circle );

     return 0;
}