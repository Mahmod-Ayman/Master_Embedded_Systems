#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[20] , temp [20];
    int  i=0 ;

    printf("Enter any string : ");
    gets(arr);


     printf("Array in reverse order: ");

    while (arr[i]!=' ')
    {

        temp [i]= arr[i];
        i++ ;
    }
    temp [i]=0;
    printf("%s ",arr+i);
    printf("%s",temp);
    return 0;


}
