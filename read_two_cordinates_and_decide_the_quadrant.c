#include <stdio.h>

int main() {

	int x_cordinate;
	printf(" Please , Enter the value of 'x' cordinate : ");
	scanf("%d", &x_cordinate);    /* take user input - taken the value of x cordinte from the user */

	int y_cordinate;
	printf(" Please , Enter the value of 'y' cordinate : ");
	scanf("%d", &y_cordinate); /* take user input - taken the value of y cordinate from the user */

	/* To determine a point in graph we need two cordinates ( x , y ) ; and that's why we taken from user two inputs as x cordinate value and y cordinate value */

	if( x_cordinate > 0 && y_cordinate > 0 )
	{
	 printf("( %d , %d ) is in Quadrant - 1 ", x_cordinate, y_cordinate); // According to the given x and y values - check the point is located in 1 st quadrant
	}
	else if( x_cordinate < 0 && y_cordinate > 0 )
	{
	 printf("( %d , %d ) is in Quadrant - 2 ", x_cordinate, y_cordinate); // According to the given x and y values - check the point is located in 2 nd quadrant
	}
	else if( x_cordinate < 0 && y_cordinate < 0 )
	{
	 printf("( %d , %d ) is in Quadrant - 3 ", x_cordinate, y_cordinate); // According to the given x and y values - check the point is located in 3 rd quadrant
	}
	else if( x_cordinate > 0 && y_cordinate < 0 )
	{
	 printf("( %d , %d ) is in Quadrant - 4 ", x_cordinate, y_cordinate); // According to the given x and y values - check the point is located in 4 th quadrant
	}
	else
	{
	 printf("( %d , %d ) is the Origin means ( 0 , 0 ) ; The point is exactly located on the origin point of the graph ", x_cordinate, y_cordinate); /* According to the given x and y values - check the point is located on the origin point of the graph */
	}	

	return 0;
}

	
