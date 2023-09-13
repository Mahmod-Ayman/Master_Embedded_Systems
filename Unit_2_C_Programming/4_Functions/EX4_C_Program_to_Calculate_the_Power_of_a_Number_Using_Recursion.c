#include<stdio.h>
int power (int , int);
int main()
{
    int num , to_power ;
    printf(" Enter base number : ");
    scanf("%d",&num);
    printf ("Enter power number(Positive integer: ");
    scanf("%d",&to_power);
    printf("%d^%d = %d ",num , to_power ,power(num , to_power));

}

int power (int num , int to_power)
{
    int return_val ;
    if ( to_power==0)
    return_val = 1 ;

    else if(to_power==0)
    return_val = num ;

    else
    {
    return_val = (num * power(num , to_power-1));
    }
    return return_val ;
}