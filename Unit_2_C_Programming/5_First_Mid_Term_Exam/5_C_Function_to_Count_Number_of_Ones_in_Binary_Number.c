#include <stdio.h>

int main ()
{
    int num , i , ones_counter;
    printf("Enter a number : ");
    scanf("%d",&num);

    for (i=0 ; i<=31 ; i++)
    {
        if (((num&1u<<i)>>i)==1)
        ones_counter++;
    }
    printf("Number of onse = %d",ones_counter);
}