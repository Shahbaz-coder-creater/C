#include <stdio.h>

int main(){
  int a1 , a2 , a3 , a4 ;

   printf("enter the marks of math = ");
   scanf("%d" , &a1);

   printf("enter the marks of che = ");
   scanf("%d" , &a2); 

   printf("enter the marks of eng = ");
   scanf("%d" ,  &a3);

   printf("enter the marks of phy = ");
   scanf("%d"  , &a4); 

   float per = ( a1 + a2 + a3 + a4 ) / 4 ;
   printf("percentage of 4 subject = %f " , per);
   
   return 0;
}