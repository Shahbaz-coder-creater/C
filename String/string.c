#include <stdio.h>

int main(){
//    char string[] = {'a' , 'b' , 'c' , 'd' , '\0'}; 
 char string[] = "abc";// same as doing char string[] = {'a' , 'b' , 'c' , 'd' , '\0'}; 
  for(int i=0 ; i<=3;i++){ // "double code ke ander null [\0 ye auto matic lag jata hai ]"
 
 printf("First character is %c\n" , string[i]);
  }
    return 0;
}