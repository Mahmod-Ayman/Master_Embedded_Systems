#include <stdio.h>
int main ()
{
    char c ; 

    printf("Enter a character : ");
    scanf("%c",&c);

    switch (c)
    {
        case 'a'...'z':
        printf("%c is an alphabet",c);
        break;
        case 'A'...'Z':
        printf("%c is an alphabet",c);
        break;
        default:
        printf("%c is not an alphabet",c);

    }

}