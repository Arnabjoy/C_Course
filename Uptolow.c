#include <stdio.h>
int main()
{
	char ch,result;
	
	printf ("Please enter your Letter : \n");
	
	scanf ("%c",&ch);
	
	result ='a' + (ch-'A');
	
	printf ("The lowercase of your entered letter is :%c",result);
	
	return 0;
}
	
	
	
