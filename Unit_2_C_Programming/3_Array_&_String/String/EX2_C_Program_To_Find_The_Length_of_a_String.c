#include<stdio.h>
int main()
{
    char text[100]  ;
    int i=0 , counter=0 ;
    
    // Assigning the string
    printf("Please enter the string : ");
    gets(text);

    // find length of string
    
    
        while (text[i] != 0)
        {
            counter++;
            i++;
        }
   
    printf("Length of string : %d", counter);
}