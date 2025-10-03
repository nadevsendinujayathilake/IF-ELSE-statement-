#include <stdio.h>

int main() {
	 int age;
	 printf("Enter your age: " );
	 scanf("%d", &age);  // to take user input - taking the data of - user age 
	
	 int pocketmoney;
	 printf("\nCurrently how much do you have ( in lkr ): ");
	 scanf("%d", &pocketmoney); // to take user input - taking the data of hand-money

	 /* If some one need to buy a beer then age need to be bigger than or equal to 18 {and} pocket money need to be bigger than or equal to 1000 - then we can use and operation to connect this both statmenets ; while when user giving inputs for age and pocketmoney under if statement and opertion's both logical operations must need to be correct to buy a beer */

	if( age >= 18 && pocketmoney >= 1000 )
	{
         printf("You can buy a beer!");
	}
	else
	{
	 printf("Sorry , You cannot buy a beer!");
	}

	return 0;
}
				
