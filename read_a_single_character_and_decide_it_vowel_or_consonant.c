#include <stdio.h>

int main() {

	char letter;
	printf(" Please , Enter any alphabetic lower case letter [ ex -: a - z ] : " ); /* to take user input - taken any lower case letter in alphabet to check that letter is a vowel or consonant */
	scanf("%c", &letter);

	if( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' )
	{
	 printf(" Given alphabetic lower case letter %c is a vowel ", letter);  // To identify the given alphabetic lower case letter is a vowel
	}
	else
	{
	 printf(" Given alphabetic lower case letter %c is a consonant ", letter); /* To identify the given alphabetic lower case letter is a consonant and it's not a vowel */
	}

	return 0;
}	
