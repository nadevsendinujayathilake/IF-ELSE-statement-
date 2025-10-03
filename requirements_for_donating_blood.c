#include <stdio.h>

int main() {
	int age;
	printf("Enter your age please : ");
	scanf("%d", &age);

	int previous_time_donating_blood;
	printf("\nDid you donate blood before! - Then can you enter how many times you donated blood before : ");
	scanf("%d", &previous_time_donating_blood);

	if( age >= 18 )
	{
	 printf("You're eligibale to donate blood");
	}
	else if ( previous_time_donating_blood >= 3 )
	{
	 printf("You're also eligibale to donate blood - before that let me check your previous blood donated cards please");
	}
	else
	{
	 printf("You're not eligibale to donate blood");
	}

	return 0;
}
