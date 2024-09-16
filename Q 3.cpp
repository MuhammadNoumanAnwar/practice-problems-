#include <stdio.h>
int main()
{
	int y;
	printf("enter year: ");
	scanf("%d" ,&y);
	
	if(y%4==0) 
	{
		printf("the year is a leap year");
	}
	else if(y%400==0)
	{
		printf(" the year is leap");
	}
	else {
		printf("the year is not leap");
	}
	return 0;
}
