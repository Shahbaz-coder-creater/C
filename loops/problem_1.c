//write a program to print multiplication 
//table of given number n .

#include <stdio.h>

int main() {
    int n;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print multiplication table
    printf("Multiplication Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
