#include <stdio.h>
// #include <math.h>

// function prototype(dceleration)
int sum(int, int);

// function definition
int sum(int x, int y)
{

  return x   * y;
}

int main()
{
  int a = 12;
  int b = 4;

  int c = sum(a, b); // FUNCTION CALL
  printf("%d\n", c);

  return 0;
}