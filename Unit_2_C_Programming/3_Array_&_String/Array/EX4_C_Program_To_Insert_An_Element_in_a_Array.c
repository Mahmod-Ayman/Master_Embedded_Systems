#include<stdio.h>
int main ()
{
    int arr[100];
    int elements , i ;
    int inserted_element , location ;

    /* Assign number of element */
    printf("Enter no of elements :") ;
    scanf("%d",&elements);

    /* Assign element values */
    for (i=0 ; i<elements ; i++)   
    {
        scanf("%d",&arr[i]);
    }

    /* Assign the inserted value */
    printf("Enter the element to be inserted : ");
    scanf("%d",&inserted_element);

    /* Assign the location */
    printf("Enter the location : ");
    scanf("%d",&location);
    // create space

    for (i=elements-1 ; i>=(location-1) ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[location-1]=inserted_element;
    // print the result of insertion
    for (i=0 ; i<elements+1 ; i++)
    {
    printf("%d  ",arr[i]);
    }
}