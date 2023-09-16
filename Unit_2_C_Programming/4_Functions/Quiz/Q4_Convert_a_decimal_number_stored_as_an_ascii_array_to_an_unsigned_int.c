#include<stdio.h>
void in_arr (int arr[] , int size);
void print_arr (int arr[] , int size );

int main ()
{
  int size , arr[100] ;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("Enter an ascii number from 0x30 (o) to 0x39 (9) : ");
    in_arr (arr , size);
    
    printf("Number= ");
    print_arr (arr , size);
}

// function to take element from user and store it in an array

void in_arr (int arr[] , int size)
{
    int i ;
    for (i=0 ; i<size ; i++)
    {
        scanf("%x",&arr[i]);            // %x to scan hexa
    }
}

// function to print an array

void print_arr (int arr[] , int size )
{
   int i ;
    for (i=0 ; i<size ; i++)
    {
        printf("%c",arr[i]);          // %c to print number equvelant to saved ascii
    }
}