#include <stdio.h>
int main ()
{
    float arr[100] , sum=0 ;
    int i , elements;

    printf("Enter the number of data : ");
    scanf ("%i",&elements);

    for (i=0 ; i<elements ; i++ )
    {
        printf("Enter number : ");
        scanf("%f",&arr [i]);
    }
    for (i=0 ; i<elements ; i++ )
    {
        sum += arr [i] ;
    }

    printf("Average = %.2f",sum/elements);
}