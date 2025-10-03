#include <stdio.h>

int main() {
	int num1;
	printf("Please Enter a number :");
	scanf("%d", &num1);

	int result;

	if( num1 % 2 == 0 )
	{
	 printf("Given number is an even number :");
	}
	else
	{
	 printf("Given number is an odd number :");
	}

	return 0;
}
