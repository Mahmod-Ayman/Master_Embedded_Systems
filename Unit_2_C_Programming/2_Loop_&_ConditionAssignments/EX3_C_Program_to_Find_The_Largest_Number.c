#include <stdio.h>

int main() 
{
    float num1, num2, num3;

    printf("Enter three different numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    if (num1 >= num2 && num1 >= num3)
        printf("%.2f is the largest number.", num1);
    
   else if (num2 >= num1 && num2 >= num3)
        printf("%.2f is the largest number.", num2);

   else if (num3 >= num1 && num3 >= num2)
        printf("%.2f is the largest number.", num3);
    else 
        printf("Numbers are equal");

    return 0;
}