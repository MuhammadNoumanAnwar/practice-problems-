#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 
    
    if (ch== 'a')
    { 
  printf("The character '%c' is a vowel.\n", ch);
    }
	else if(ch =='e')
    {
		  printf("The character '%c' is a vowel.\n", ch);
    }
    else if(ch== "i")
	
	 {
		  printf("The character '%c' is a vowel.\n", ch);
     }
	else if(ch=='i')
	{
		 printf("The character '%c' is a vowel.\n", ch);
	}
	else if(ch=='o')
	{
	 printf("The character '%c' is a vowel.\n", ch);
    } 
    else if(ch == 'u')
   	{
	 printf("The character '%c' is a vowel.\n", ch);
    } 
	 else {
        printf("The character '%c' is a consonant.\n", ch);
    }

    return 0;
}
