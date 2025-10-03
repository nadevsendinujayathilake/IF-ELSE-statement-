#include <stdio.h>

int main() {

	int num;
	printf("Enter a number : "); 
	scanf("%d", &num); // to take user input

	if( num > 0 )
	{
	 printf("\nGiven number is a positive number"); // to identify given number is a positive number
	}
	else if(num < 0 )
	{
	 printf("\nGiven number is a negative number"); // to identify given number is a negative number
	}
	else
	{
	 printf("\nGiven number is equal to Zero"); // to identify given number is equal to the zero
	}

	return 0;
}
