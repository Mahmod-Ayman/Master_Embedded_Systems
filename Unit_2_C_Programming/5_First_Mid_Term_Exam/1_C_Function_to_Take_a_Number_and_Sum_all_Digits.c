#include <stdio.h>

int main()
{
    int num , sum;
    int digit_sum (int num);
    printf("Enter any number : ");
    scanf("%d",&num);

    sum = digit_sum(num);
    printf("sum = %d",sum);
}

 int digit_sum (int num)
 {
   static int return_val =0 , rem ;
    if (num != 0)
    {
    rem= num%10 ;
     return_val +=rem ;
    digit_sum(num/10);
    }
    else
    {
        return 0;
    }
 
    return return_val;


 }