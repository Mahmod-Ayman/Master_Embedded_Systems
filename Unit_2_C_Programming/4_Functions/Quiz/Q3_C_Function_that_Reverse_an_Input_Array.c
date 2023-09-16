#include<stdio.h>
void in_arr (int arr[] , int);
void print_arr (int arr[] , int);
void reverse (int arr[] , int);

int main()
{
    int arr [100] , size ;

    printf("Enter the size of array : ");
    scanf("%d",&size);
    
    // take the elements from user
    printf ("Enter %d element of array : ", size);
    in_arr (arr , size);

    // print the elements befor reverse
    printf("Elements befor reverse : ");
    print_arr (arr , size);

    // call reversr function
    reverse (arr , size);

    // print the elements after reverse
    printf("Elements after reverse : ");
    print_arr (arr , size);


    return 0;
}
 // function to take element from user and store it in an array

void in_arr (int arr[] , int size)
{
    int i ;
    for (i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
}


// function to print an array

void print_arr (int arr[] , int size )
{
   int i ;
    for (i=0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
}

// reverse function

void reverse (int arr[] , int size)
{
    int i , j , temp;
    for (i=0 , j=size-1 ; i<=j ; i++ , j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
