#include <stdio.h>
int check_prime (int num);
int main ()
{
    int num1 , num2 , i , flag;

    printf("Enter two positive numbers : ");
    scanf("%d%d",&num1,&num2);

     printf("Prime numbers between %d and %d are : ", num1 ,num2);

    for (i=num1 +1 ; i<num2 ; i++)
    {
        flag = check_prime(i);
        if (flag==0)
        printf("%d ",i);
    }
}

int check_prime (int num)
{
    int i , flag =0 ;

    for (i=2 ; i<num/2 ; i++)
    {
        if ( (num % i) ==0 )
        {
            flag =1 ;
            break ;
        }
    }
    return flag ;
}
