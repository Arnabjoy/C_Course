#include <stdio.h>
int main ()
{
	char ch;
	printf ("Please enter your letter: \n");
	scanf("%c",&ch);
	
	if (ch >='A' && ch <= 'Z'){
		printf ("The letter you entered is Uppercase letter\n");
	}
	
	else {
		printf ("The letter is lowercase\n");
	}
	return 0;
}
