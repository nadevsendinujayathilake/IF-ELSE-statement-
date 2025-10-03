#include <stdio.h>

int main() {

	int age = 17; // age must need to be 18 years old to buy a beer
	int handmoney = 1200; // handmoney must need to be more than 1000 to buy a beer
			      // both 2 statments need to validate to buy a beer
	

	if ( age > 18 ) // age validation ( age must need to be equal or more than 18 years old
			{
	
	 
	 if( handmoney > 1000 ) // hand money validation ( hand money must need to be more than 1000 )
				/* use nested if statement beacuse first need to get the validation of the age and after that need to check have enough hand money to buy a beer */ {
		 printf("you can buy a beer");
	 }
	 else {
		 printf("you cannot buy a beer because you need at least 1000 to buy a beer");
	 
	 }
			}
	else {
		printf("you are not eligibale to buy a beer , you age must need up to be 18 years or more");
				 }
	
	return 0;
	}

