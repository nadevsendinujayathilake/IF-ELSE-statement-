#include <stdio.h>

int main() {

	int speed;
	printf("Please , Enter the speed you detected in km/ph : ");
	scanf("%d", &speed);                                          // to take user input - taken detected car's speed in km/ph

	if( speed >= 70 )
	{
	 printf("\nSpeed is over 70 km/ph! Detected - Speeding fine applies " ); // If car's speed is over 70 km/ph then speeding fine applies for the driver
	}
	else
	{
	 printf("\nSpeed is below than 70 km/ph - Speed is acceptable " ); // If car's spped is below 70 km/ph ; then car's speed is acceptable
	}

	return 0;
}
