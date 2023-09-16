#include<stdio.h>
int clear (int num , int position);
int main()
{
    int num , position  ;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Enter a bit position to clear : ");
    scanf("%d",&position);

    printf("result= %d" ,clear (num ,position));
    


return 0 ;
}

int clear (int num , int position )
{
    int result ;
   result = num & ~ (1<<position);

   return result ;
}