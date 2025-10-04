#include <stdio.h>

int main() {

	int year;
	printf("\nPlease , Enter a year [ ex -: 2005 ] : ");
	scanf("%d", &year); // Take user input - take number of the year and going to consider is that year a leap year or not

	if( year % 4 == 0 )
	{
	 printf("\nGiven Year is a leap year - %d " , year);
	}
	else
	{
	 printf( "\nGiven Year isn't a leap year - %d " , year);
	}

	int monthNumber;
	printf("\nPlease , Enter the Number of Mont in year [ ex -: January as 1 ] : ");
	scanf("%d", &monthNumber);   /* Take user input - taken input as January - 1 , February - 2 , March - 3 , April - 4 , May - 5 , June - 6 , July - 7 , August - 8 , September - 9 , October - 10 , November - 11 , December - 12  like taken the number of month to check how many dates have for each month */

	if( monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12 )
	{
	 printf("\nThe Given number of Month - %d have - 31 days", monthNumber);
	}
	else if( monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11 )
	{
	 printf("\nThe Given number of Month - %d have - 30 days", monthNumber);
	}
	else if( year % 4 == 0 && monthNumber == 2 )
	{
	 printf("\nFirst The Given Year - %d is a Leap year and The Given number of Month - %d have - 29 days", year , monthNumber);
	}	
	else
	{
	 printf("\nFirst The given Year - %d isn't a Leap year and The Given number of Month - %d have - 28 days", year , monthNumber);
	}

	/* First when user give a year ; analysis first sight is it a leap year or not; after that user needs to give a number of month ; according to the given month and if the given is a leap year or notexcute how many dates have considering month */

	return 0;
}
