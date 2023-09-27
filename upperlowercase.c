#include <stdio.h>
#include <ctype.h>

int main()
{
	char letter;
	printf("Please enter your letter : ");
	scanf("%c",&letter);
	
	if (letter == tolower(letter)) {
		printf("%c is lowercase", letter);
	} else {
		printf("%c is uppercase", letter);
	}
	
	return 0;
}
	
