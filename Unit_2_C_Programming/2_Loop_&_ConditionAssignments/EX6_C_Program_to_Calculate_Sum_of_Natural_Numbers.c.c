#include <stdio.h>
int main ()
{
    int num , sum=0 , counter=0 ;

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
            sum += counter ;
        }
    printf("sum = %d",sum);    
    }


}