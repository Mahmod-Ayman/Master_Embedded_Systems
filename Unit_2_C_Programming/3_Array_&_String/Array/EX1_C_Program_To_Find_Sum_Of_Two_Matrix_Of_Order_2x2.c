#include<stdio.h>

int main ()
{
float matrix_1 [2][2] , matrix_2 [2][2] , sum [2][2] = {0} ;
int r,c ;

/* Enter values of matrix b */
printf("Enter the element of 1st matrix\n");
    for (r=0 ; r<2 ; r++)
    {
       for ( c=0 ; c<2 ; c++)
       {

           printf("enter a%d%d:",r+1 , c+1 );
           fflush(stdin); fflush(stdout);
           scanf("%f",&matrix_1 [r][c]);
       }
    }

/* Enter values of matrix b */
    printf("Enter the element of 2nd matrix\n");
for (r=0 ; r<2 ; r++)
    {
       for ( c=0 ; c<2 ; c++)
       {

           printf("enter b%d%d:",r+1 , c+1 );
           fflush(stdin); fflush(stdout);
           scanf("%f",&matrix_2 [r][c]);
       }
    }

   /*Calculation of sum of matrix*/
    printf("sum of matrix :\n");
    for (r=0 ; r<2 ; r++)
    {
       for ( c=0 ; c<2 ; c++)
       {

           sum [r][c] = matrix_1 [r][c] + matrix_2 [r][c] ;
           printf ("%.1f\t", sum [r][c]);
       }
       printf("\n");
    }



}
