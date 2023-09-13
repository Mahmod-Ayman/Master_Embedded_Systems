#include <stdio.h>
int main ()
{
   int matrix[100][100];
	int t_matrix[100][100];
	int row, column , r , c ;
    
    printf("Enter rows and column of matrix : ");
    scanf("%d%d",&row , &column);
/* Assign matrix values */
    for ( r=0 ; r<row ; r++)
    {
        for ( c=0 ; c<column ; c++)
        {
            printf("Enter element a%d%d : ",r+1,c+1);
            scanf("%d",&matrix[r][c]);
        }
    }
	 printf("Enterd Matrix : \n");
    for ( r=0 ; r<row ; r++)
    {
        for ( c=0 ; c<column ; c++)
        {
            printf("%d\t ",matrix[r][c]);
            
        }
        printf("\n");
    }
    /* calculating transpose */
    for ( r=0 ; r<row ; r++)
    {
        for ( c=0 ; c<column ; c++)
        {
            t_matrix[r][c] = matrix[c][r] ;
            
        }
    }
    /* printing transpose matrix */
    printf("Transpose of matrix :\n");
        for ( r=0 ; r<column ; r++)
    {
        for ( c=0 ; c<row ; c++)
        {
            printf("%d\t ",t_matrix[r][c]); ;
            
        }
        printf("\n");
    }


}