#include <stdio.h>
int main ()
{
    int num , factorial=1 , counter=1 ;

  l:  printf("Enter an integer : ");
    scanf("%d",&num);

    if (num <0)
    {
        printf("Error!!! Enter natural number \n");
        goto l;
    }
    else
    {
        for (counter ; counter <= num ; counter++)
        {
            factorial *= counter ;
        }
    printf("factorial = %d",factorial);    
    }


}