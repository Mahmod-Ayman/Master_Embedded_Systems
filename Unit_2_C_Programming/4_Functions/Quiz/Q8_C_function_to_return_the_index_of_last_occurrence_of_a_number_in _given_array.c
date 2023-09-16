#include<stdio.h>
void in_arr (int arr[],int size );
int index (int arr[] , int size);


int main()
{
    int arr [100] , size ;

    printf("Enter the number of elements : ");
    scanf("%d",&size);

    printf("Enter the the elements of array : ");
    in_arr (arr ,size);

    printf("Enter the element to be searched : ");
   

    

    printf("result= %d",index(arr , size));
}

void in_arr (int arr[] , int size)
{
    int i ;
    for (i=0 ;i<size ; i++ )
    {
        scanf("%d",&arr[i]);
    }
}

int index (int arr[] , int size)
{
    int searched_num , i ,z , flag=0 ;
     scanf("%d",&searched_num);
    for (i=0 ; i<size ; i++)
    {
        if (arr[i]== searched_num)
        {
            z=i;
            flag = 1 ;
        }
       
       
    }
    if (flag ==0)
    {
        z=-1;
    }
     return z ;                // if item is not in the list return -1
}