#include<stdio.h>
#include<string.h>

int main ()
{
    char arr1[100] , arr2[100] , result ;
    
    printf ("Enter a string : ");
    gets (arr1);

    printf ("Enter your username : ");
    gets(arr2);

/* Comparing process using "stricmp" from string.h library */
    result = strcmp (arr1 , arr2);

    if (result == 0)
    printf("Identical");
    else
    printf("Different");

}