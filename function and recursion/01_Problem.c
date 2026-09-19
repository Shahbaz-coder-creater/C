#include <stdio.h>

 float average(int x ,int y, int z);
   
float average(int x ,int y, int z){
    return (x+y+z)/3.0;
 }
int main(){
  
  int  a ;
  int  b ;
  int  c ;
  printf("Enter the value of  a \n");
    scanf("%d",&a); 
  printf("Enter the value of  b \n");
    scanf("%d",&b); 
  printf("Enter the value of c \n");
    scanf("%d",&c); 

  printf("the average no of a , b ,c  is %f",average(a,b,c));
    return 0;
}