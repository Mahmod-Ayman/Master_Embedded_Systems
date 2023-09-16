#include<stdio.h>
int check_prime(int);
int main()
{
    int n1 , n2 , i , flag ;
   printf("Enter tow numbers (interval) : ");
   scanf("%d%d",&n1,&n2);

   printf("Prime numbers between %d and %d are : ", n1 ,n2);
  for ( i = n1+1 ; i<n2 ; i++)
  {
   flag= check_prime(i);
    if(flag==0)
    printf("%d\t",i);
  }
  return 0 ;
}

int check_prime(int num)
{
    int i , flag =0;
    for (i=2 ; i<= (num/2) ; i++)
    {
        if ((num % i)==0)
        {
            flag =1;
            break;
        }
    }
    return flag;

}
