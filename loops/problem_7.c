#include <stdio.h>

int main()
{
    float n, sum = 0, i, multiply = 1;

    printf("Enter the number");
    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
        multiply *= i;
    }
    printf("sum of first n %f natural number is %f and multiple is  %f\n ", n, sum, multiply);

    return 0;
}