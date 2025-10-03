#include <stdio.h>

int main() {

	int number1; // take user input - taken first number
	printf("Please , Enter first number : ");
	scanf("%d", &number1);

	int number2; // take user input - taken second number
	printf("\nPlease , Enter second number : ");
	scanf("%d", &number2);

	/* Now need to take an action to check given number1 and number2 values are equal with eachother */

	if( number1 == number2 )
	{
	 printf("Given %d and %d numbers are equal",number1, number2);
	}

	// just consider user's given two number values are equal and otherwise do nothin - means dosen't need a else statement for this situation
	
	return 0;
}
