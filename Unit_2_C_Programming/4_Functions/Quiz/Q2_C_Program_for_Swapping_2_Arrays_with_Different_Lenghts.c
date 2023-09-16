#include<stdio.h>
void in_arr (int arr[], int size);
void print_arr (int arr[] , int size );
void swap (int arr1[], int arr2[]);

int main()

{
    int arr1 [100] , arr2 [100];
    int arr1_size , arr2_size ;

    printf("Enter the size of arrar(1) ; ");
    scanf("%d",&arr1_size);

    printf("Enter the size of arrar(2) ; ");
    scanf("%d",&arr2_size);

    printf("Enter the %d elements of arrar(1) ; ",arr1_size);
    in_arr (arr1 , arr1_size);

    printf("Enter the %d elements of arrar(2) ; ",arr2_size);
    in_arr (arr2 , arr2_size); 


    printf("First array befor swaping : ");
    print_arr (arr1 , arr1_size);

    printf("\nSecond array befor swaping : ");
    print_arr (arr2 , arr2_size);

    //call swap function

    swap (arr1 , arr2);

    printf("\nFirst array after swaping : ");
    print_arr (arr1 , arr2_size);

    printf("\nSecond array after swaping : ");
    print_arr (arr2 , arr1_size);





} // end of main function 

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

// swap function

void swap (int arr1[],int arr2[])
{
    int temp , i;
    for (i=0 ; i<100 ; i++)
    {
        temp = arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
}