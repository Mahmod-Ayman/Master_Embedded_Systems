#include<stdio.h>
int read (int num , int position);
int main()
{
    int num , position  ;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Enter a bit position to read : ");
    scanf("%d",&position);

    printf("result= %d" ,read (num ,position));
    


return 0 ;
}

int read (int num , int position )
{
    int result ;
   result = (num & (1u<<position))>>position;

   return result ;
}