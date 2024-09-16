#include <stdio.h>
int main()
 {
	int mar;
	printf("enter marks : ");
	scanf("%d" ,&mar);
	
	if(mar>=90)
	{
		printf("grade A");
	}
    else if(mar>=80 && mar<90)
	{
		printf("grade B");
	}
	else if(mar>= 70 && mar<80 )
	{
		printf("grade c");
	}
	else if(mar>=60 && mar<70)
	{
		printf(" grade  D");
	}
    else 
	{
    	printf("grade F");
   }
   return 0;
}
		



