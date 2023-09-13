#include<stdio.h>
int main ()
{
	int arr[100];
    int elements , i ;
    int searched_num ;

	 /* Assign number of element */
    printf("Enter no of elements :") ;
    scanf("%d",&elements);

    /* Assign element values */
    for (i=0 ; i<elements ; i++)   
    {
        scanf("%d",&arr[i]);
    }

    /* Assign the inserted value */
    printf("Enter the element to be searched : ");
    scanf("%d",&searched_num);

	for (i=0 ; i<elements ; i++)
	{
		if (arr[i]==searched_num)
		{
		printf("Number found at the location : %d",i+1);
		break;
		}
	}
}