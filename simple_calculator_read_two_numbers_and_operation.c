#include <stdio.h>

int main() {

	printf("Use this simple calculator while using - two numbers and one operation\n");

	int num1, num2, result;
	printf("\nPlease , Enter the first number : " );
	scanf("%d", &num1);
	printf("\nPlease , Enter the second number : " );
	scanf("%d", &num2);         // To make the mathemtical function between two numbers while using simple mathematical operator
	char operator;
	printf("\nChoose an Operator [ + , - , * , / ] : " );
	scanf(" %c",&operator);
	
	

	/* In this simple calculator -  take user inputs - taken two numbers and simple mathematical operation and now we need to make the logical operations for each operator and need to consider can't divide by a given number from zero (0) */

	if( operator == '+' )
	{
	 result = num1 + num2; // Mathematical operation - summation between given two numbers
	 printf("The final result of %d %c %d = %d\n " ,num1 , operator, num2, result);
	}
	else if( operator == '-' )
	{
	 result = num1 - num2; // Mathematical operation - differnciation between given two numbers
	 printf("The final result of %d %c %d = %d\n " ,num1 , operator, num2, result);
	}
	else if( operator == '*' )
	{
	 result = num1 * num2; // Mathematical operation - multiplication of given two numbers 
	 printf("The final result of %d %c %d = %d\n " ,num1 , operator, num2, result);
	}
	else if( operator == '/' )
	{	
		if( num2 == 0 ) // using nested loops in devision sector beacuse denominator can't be eqaul to zero (0) 
		{
		 printf("\nError! Can't devide by the Zero"); // Can't divide by zero beacuse result is going to be infinity
		}
		else
		{
		 result = num1 / num2; // Mathematical operation - devision of given two numbers
		 printf("\nThe final result of %d %c %d = %d " ,num1 , operator, num2, result);
		}
	}
	else
	{
	printf("Error ! Invalid Input or Input is missing ; Check it again and Try it again please " ); /* Infrom the user about inavlid input or may be he/she missed to give some input may be a number or operator */
	}



	return 0;
}
