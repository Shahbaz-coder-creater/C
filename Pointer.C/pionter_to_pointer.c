#include <stdio.h>

int main(){
     
    int i = 3 ; 
    int *p = &i ;
    int **k = *p ;

    printf ("The value of i is %d\n" , i);
     printf ("The value of i is %d\n" , *p);
      printf ("The value of i is %d\n" ,*(&i));
       printf ("The value of i is %d\n" ,**(&p));

    return 0;
}