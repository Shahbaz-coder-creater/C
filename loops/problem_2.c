// write a program to print multiplication 
// table of 10 revers order 


#include <stdio.h>

int main(){
    int n ;
    printf ("enter the number:- ");
    scanf("%d",&n);

    printf(" multiplication table of 10 reverse %d\n" , n);

    for (int i = 10 ; i >= 1 ; --i){
    printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}