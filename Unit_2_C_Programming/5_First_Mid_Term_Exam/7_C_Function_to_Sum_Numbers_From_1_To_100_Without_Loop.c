#include <stdio.h>

int main ()
{
   int num , sum ;
   printf("Enter the value od the number ; ");
   scanf("%d",&num);
   sum = num *(num+1)/2;
   printf("Sum of numbers from 0 to %d = %d",num,sum);
    return 0;
}
