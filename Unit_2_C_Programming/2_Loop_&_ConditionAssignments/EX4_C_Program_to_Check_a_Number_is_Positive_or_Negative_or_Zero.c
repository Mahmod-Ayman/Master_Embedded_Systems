#include <stdio.h>
int main ()
{
    float num ;

    printf("please enter a number : ");
    scanf("%f",&num);

    if (num>0)
    printf("%.2f is positive ",num);
    else if (num<0)
    printf("%.2f is negative ",num);
    else
    printf("You enterd zero");
}