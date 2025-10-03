#include <stdio.h>

int main() {

	printf("Welcome to the 2025 Presidential Election ! Your vote will decide who's gonna be next president in our country");
	int age;
	printf("\nPlease , Enter your age :");
	scanf("%d", &age); // To take user's age 

	if( age >= 18 ) // checking age validity ( can vote age 18 or up above citizens)
	{
	 printf("\nYou're eligible to vote");
	}
	else
	{
	 printf("\nYou're not eligible yet to vote"); // checking age invalidity ( below age 18 citizens can't vote yet)
	}

	return 0;
}
