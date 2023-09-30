#include <stdio.h>
#include <math.h>


int main (void)
{
  double num , result ;
  printf("Enter a number : ");
  fflush(stdin); fflush(stdout);
  scanf("%lf",&num);

  result = sqrt(num);
  printf("Square root of %.3f = %.3f", num, result);
  return 0;
}