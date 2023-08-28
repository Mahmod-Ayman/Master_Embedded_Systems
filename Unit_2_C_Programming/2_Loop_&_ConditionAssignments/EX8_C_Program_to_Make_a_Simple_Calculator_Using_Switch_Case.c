#include <stdio.h>
int main ()
{
    char operator ; float num1 ,num2 ; double result ;

    printf("Enter operaitor either + or - or * or / : ") ;
    scanf("%c",&operator);
    switch (operator)
    {
        case '+':
        printf("Enter tow operands : ");
        scanf("%f%f",&num1,&num2);
        result = num1 +num2 ;
         printf("%.1f %c %.1f = %.1lf",num1,operator,num2,result);
        break ;

        case '-':
        printf("Enter tow operands : ");
        scanf("%f%f",&num1,&num2);
        result = num1 -num2 ;
         printf("%.1f %c %.1f = %.1lf",num1,operator,num2,result);
        break ;

        case '*':
        printf("Enter tow operands : ");
        scanf("%f%f",&num1,&num2);
        result = num1 *num2 ;
        printf("%.1f %c %.1f = %.1lf",num1,operator,num2,result);
        break ;

        case '/':
        printf("Enter tow operands : ");
        scanf("%f%f",&num1,&num2);
        result = num1 /num2 ;
        printf("%.1f %c %.1f = %.1lf",num1,operator,num2,result);
        break ;


    }
}