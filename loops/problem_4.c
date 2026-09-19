#include <stdio.h>

int main()
{
    int n, b;

    printf("frist n natural number Start ");
    scanf("%d", &n);
    printf("frist n natural number End ");
    scanf("%d", &b);
    do
    {
        printf("%d\n", n);
        n++;
    } while (n < b);

    return 0;
}