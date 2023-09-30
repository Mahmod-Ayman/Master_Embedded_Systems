#include <stdio.h>

int main ()
{
    int num ,i=0 ;
    printf("Enter a number : ");
    scanf("%d",&num);

   while (num != 0)
   {
        i*=10;
        i+=(num%10);
        num /=10 ;
   }
    printf("Reverse of the number = %d\n", i);
}