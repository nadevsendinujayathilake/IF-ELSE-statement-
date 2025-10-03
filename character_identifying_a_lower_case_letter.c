#include <stdio.h>

int main() {

	char letter1;
	printf("Please , Enter any letter [ between a - z ] { don't consider upper or lower case } :  " ); /* Take user input - taken a alphabetic letter without considering that letter lowwercase or uppercase letter */
	scanf("%c", &letter1);

	if( letter1 == 'a' || letter1 == 'b' || letter1 == 'c' || letter1 == 'd' || letter1 == 'e' || letter1 == 'f' || letter1 == 'g' || letter1 == 'h' || letter1 == 'i' || letter1 == 'j' || letter1 == 'k' || letter1 == 'l' || letter1 == 'm' || letter1 == 'n' || letter1 == 'o' || letter1 == 'p' || letter1 == 'q' || letter1 == 'r' || letter1 == 's' || letter1 == 't' || letter1 == 'u' || letter1 == 'v' || letter1 == 'w' || letter1 == 'x' || letter1 == 'y' || letter1 == 'z' )
	{
	 printf("Given letter is a lower-case letter"); // verify - given letter is an alphabetic lower case letter 
	}
	else
	{
	 printf("Given letter isn't a lower-case letter"); // verify - given letter isn't an alphabetic lower case letter
	}

	return 0;
}
