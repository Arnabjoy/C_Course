#include <stdio.h>
int main()
{
	char letter;
	printf("Please enter your letter : ");
	scanf("%c",&letter);
	
	if ( letter=='a'||letter== 'e'||letter== 'i'||letter== 'o'||letter== 'u') {
		printf("%c is vowel",letter);
	}
	
	else if ( letter=='A'||letter== 'E'||letter== 'I'||letter== 'O'||letter== 'U'){
		printf("%c is vowel",letter);
	}
	
	else {
		printf("%c is consonant",letter);
	}
	
	return 0;
}
	
