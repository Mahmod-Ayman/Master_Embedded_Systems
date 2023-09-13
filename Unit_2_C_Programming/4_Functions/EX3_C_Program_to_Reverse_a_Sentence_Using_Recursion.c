#include<stdio.h>

void reverse (void);
int main()
{

    printf("Enter a sentense : ");
    reverse();
}

// reverse function
void reverse (void)
{
   char c;
	scanf("%c", &c);
	if (c != '\n')  // to stop the recursion 
	{
		reverse(); // calling again 
		printf("%c", c);
	}
}