#include<stdio.h>
int check_power (int num);

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    printf("%d--> %d",num , check_power(num));
    return 0;

}//end of main

//function to return 0 if a given number is power to 3

int check_power (int num)
{
    if (num%3==0)
    return 0;              
    else 
    return 1 ;

}