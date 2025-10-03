#include <stdio.h>

int main() {

	int dayNo;
	printf("Please , Enter a number between ( 1 - 7 ) to identify a day by name of the week : " );
	scanf("%d", &dayNo); 

	/* To infrom user and take user input - according to the 7 days of a week , each day consider as a number ( ex-: 1 ) is equal to Monday */ 

	if( dayNo == 1 )
	{
	 printf("\nAccording to the given number - you're looking for - Monday" ); // If user gave the number 1 as the input - then he recived Monday
	}
	else if( dayNo == 2 )
	{
	 printf("\nAccording to the given number - you're looking for - Tuesday" ); // If user gave the number 2 as the input - then he recived Tuesday
	}
	else if( dayNo == 3 )
	{
	 printf("\nAccording to the given number - you're looking for - Wednesday" ); // If user gave the number 3 as the input -then he recived Wednesday
	}
	else if( dayNo == 4 )
	{
	 printf("\nAccording to the given number - you're looking for - Thursday" ); // If user gave the number 4 as the input -then he recived Thursday
	}
	else if( dayNo == 5 )
	{
	 printf("\nAccording to the given number - you're looking for - Friday" ); // If user gave the number 5 as the input -then he recived Friday
	}
        else if( dayNo == 6 )
        {
         printf("\nAccording to the given number - you're looking for - Saturday" ); // If user gave the number 6 as the input -then he recived Saturday
	}
        else if( dayNo == 7 )
        {
         printf("\nAccording to the given number - you're looking for - Sunday" ); // If user gave the number 7 as the input -then he recived Sunday
	}	
	else
	{
	 printf("\nInvalid input , can't identify the name of the day according to the given number , Please , try again! , try to input number ( 1 - 7 )"); /* IIf user gives number like * out of the 1 -7 number limit ; then it identified as a invalid input */
	}

	return 0;
}


