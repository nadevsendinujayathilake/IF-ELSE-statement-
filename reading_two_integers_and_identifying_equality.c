#include <stdio.h>

int main() {

	int A; // take user input - read first integer (number)
	printf("Please , Enter first number : ");
	scanf("%d" , &A);
	int B; // take user input - read second integer (number)
	printf("\nPlease , Enter second  number : ");
	scanf("%d" , &B);                            // taken two integers (numbers) from user

	if ( A == B ) 
	{
	 printf("\nGiven two numbers are equal : %d equal to %d", A , B); // indetifying given two numbers are equal with each other 
	}
	else
	{
	 printf("\nGiven tow numbers are not equal : %d not equal to %d", A , B); // identifying given two numbers are not equal with each other
	}

	return 0;
}
							 
