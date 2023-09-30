#include <stdio.h>

int main ()
{
    int arr [20] , i , size , temp=0 ;

  printf("Enter the size of array : ");
  scanf("%d",&size);

  printf("Enter the elements of array : ");
  for (i=0 ; i<size ; i++)
  {
    scanf("%d",&arr[i]);
  }
  
  for (i=0 ; i<size ; i++)
  {
    temp =temp ^ arr[i];
  }
  printf("Unique number of array is : %d",temp);
}