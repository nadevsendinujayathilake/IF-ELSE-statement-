#include <stdio.h>

int main() {

	int num1, num2, num3; /* num1 is A ; num2is B ; and num3 is C ; those three numbers are distinct */

	printf("Please , Enter number for - A : ");
	scanf("%d", &num1);

	printf("\nPlease , Enter number for - B : ");
	scanf("%d", &num2);

	printf("\nPlease , Enter number for - C : ");
	scanf("%d", &num3);                         /* take user inputs - taken numeric values for A , B and C from the user and now need to decide which value has the highest numeric value */

	if(num1 > num2 && num1 > num3)
	{
	 printf("\nThe largest numeric value has number A - %d", num1); // Identify the largest value is the given number for A 
	}
	else if(num2 > num1 && num2 > num3)
	{
	 printf("\nThe largest numeric value has number B - %d", num2); // Identify the largest value is the given number for B
	}
	else
	{
	 printf("\nThe largest numeric value has number C - %d", num3); // Identify the largest value is the given number for C
	}

	/* Three values can't equal qith each other , that's why they given distinct term , so when we use the condition we can't use >= or <= meanwhile they given three values need to be distinct */

	return 0;
}
