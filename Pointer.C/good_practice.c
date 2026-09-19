#include <stdio.h>

int main(){
     int i = 23;
     int *j;
     j = &i;

     printf("add i = %u\n" , &i);       //  add i = 6422300
                                       //  add i = 6422296
                                      // add j = 6422296
                                     // add i = 23
                                    //  add i = 23
                                  //  add i = 23
     printf("add i = %u\n" , &j);
     printf("add j = %u\n" , &j);
     printf("add i = %d\n" , i);
     printf("add i = %d\n" , *(&i));
     printf("add i = %d\n" , *j);
    return 0;
}