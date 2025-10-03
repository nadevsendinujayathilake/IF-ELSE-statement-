#include <stdio.h>

int main() {

	int mark;
	printf("\nEnter student's marks for Programming Language [c] : ");
	scanf("%d", &mark);                                                // to take student's marks for programming language [c]

	if( mark >= 50 )
	{
	 printf("Dear student you pass the exam , Congratulations!"); /* verify student's pass the exam well according to the taken 50 or up above marks */
	}
	else
	{
	 printf("Dear student you didn't pass the exam , Unfortunately you need to sit repeat exam please"); /* verify student's didn't pass the exam , and fail to take 50 or up above mark */
	}

	return 0;
}
