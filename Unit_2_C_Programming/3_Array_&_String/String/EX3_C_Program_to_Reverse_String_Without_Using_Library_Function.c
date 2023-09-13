#include<stdio.h>
#include<string.h>
int main ()
{
     char text[100]  ;
    int i=0  ;
    
    // Assigning the string
    printf("Please enter the string : ");
    gets(text);

    // Reversing process 
    
 printf("Reverse string is : ");
    for (i=strlen(text)-1 ; i>=0 ; i-- ) 
        printf("%c",text[i]);
    }
}