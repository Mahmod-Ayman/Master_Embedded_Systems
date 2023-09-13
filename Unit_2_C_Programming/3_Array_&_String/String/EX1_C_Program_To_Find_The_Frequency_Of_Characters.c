#include<stdio.h>
int main ()
{
    char text[100] , char_to_find ;
    int i , counter=0 ;

    // Assigning the string
    printf("Please enter the string : ");
    gets(text);

    // Assigning the char to find it
    printf("Enter a character to find frequency : ");
    scanf("%c",&char_to_find);

    // get the freq of the char
    for (i=0 ; i<100 ; i++)
    {
        if (text[i]== char_to_find)
        {
            counter++;
        }
    }
    printf("Frequancy of %c = %d",char_to_find,counter);
}