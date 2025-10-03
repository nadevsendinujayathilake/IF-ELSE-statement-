#include <stdio.h>

int main() {

	int number1;
	printf("Enter any number [ 0 - 10 ] : ");
	scanf("%d", &number1);

	if( number1 == 0 )
	{
	 printf("\n The given number is Zero (0) "); // If the user input number is exactly equal to zero ; then identifying the given  number is equal to zero
	}
	else
	{
	 printf("\n The number is non zero or The given number isn't equal to the zero (0) " ); /* If the user input number isn't equal to the zero ; then identifying the given number isn't equal to zero */
	}

	return 0;
}
