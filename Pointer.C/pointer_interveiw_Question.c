#include <stdio.h>

int main() {
    int a = 10;
    char c = 'A';

    int *pi = &a;
    char *pc = &c;

    printf("Address of int a      : %u\n", pi);
    printf("Address after pi + 1  : %u\n", pi + 1);

    printf("\nAddress of char c     : %u\n", pc);
    printf("Address after pc + 1  : %u\n", pc + 1);

    return 0;
}
// Pointer arithmetic mein pointer ka increment uske data type ke size par depend karta hai, 
// kyunki pointer + 1 ka matlab next same type ke variable par jaana hota hai.