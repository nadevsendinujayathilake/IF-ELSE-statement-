#include <stdio.h>

int main() {

	int num1;
	printf("Please , Enter any integer value : ");
	scanf("%d", &num1);
	
	int positivenumber;

	if( num1 > 0 )
	{
	 printf("Given number's value is : %d ", num1); /* If given number's value is positive , then just print the value of original */
	}
	else if( num1 < 0 )
	{
	 positivenumber = num1 * -1;
	 printf("Given number value is : %d ", positivenumber); /* If given number's value is negative , then we need to multiply original by (-1) to get the absolute value of it */
	}
	else
	{
	 printf("Given number's value is equal to zero (0) " );
	}

	return 0;
}
