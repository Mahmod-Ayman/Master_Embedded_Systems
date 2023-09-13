#include<stdio.h>
unsigned int fact (unsigned int);
int main ()
{
   
    unsigned int num , result;

   // Asignning number 
    printf("Enter an positive intiger : ");
    scanf("%d",&num);

    // Check the sign of the number
    if (num>0  )
    {
        result = fact(num);
        printf("Factorial of %d :%d ", num ,result );

    }
    else
    printf("Enter posive number ");
} // End of main

    // Functions Definition
 unsigned int fact (unsigned int num )
{
    unsigned int return_val ;
    if (num<=1 )
    {
    return_val =1 ;
    }
    else
     {
        return_val = num  * fact(num-1);
     }
     return return_val ;
}
