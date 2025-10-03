#include <stdio.h>

int main() {

	int year;
	printf("Please , Enter a year [ex -: 2005] : ");
	scanf("%d", &year);

	if( year % 4 == 0 )
	{
	 printf(" Possible Leap Year : %d ", year);
	}
	else
	{
	 printf(" Not a Leap Year : %d ", year);
	}

	return 0;
}
