// write a program to find out wheather a student is pass or fail .
// if required total 40 % and at list 33% persent in each
// subject to pass . assume 3 subject and make as input from the user.

#include <stdio.h>

int main(){
   float  mat_marks, eng_marks , scin_marks; 
   float total_marks ;

   printf("Enter the number of math :- ");
   scanf("%f", &mat_marks);

   printf("Enter the number of eng :- ");
   scanf("%f" , &eng_marks);

   printf("Enter the number of scin :- ");
   scanf("%f" , &scin_marks);
   
   total_marks =( mat_marks + eng_marks + scin_marks)/3.0;

   printf("Enter the number of total_marks %f :-\n " , total_marks);
   

    if (total_marks >= 40 &&  mat_marks >= 33 &&  eng_marks >= 33 &&   scin_marks >= 33    ){
      printf("you are pass \n ");

    } 
   
   else{
   printf(" you are fail 😢\n");
   }

    return 0;
}
