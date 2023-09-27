#include <stdio.h>
int main ()
{
	int a,b,sum;
	printf("Please give an input for a (integer) :" );
	scanf("%d",&a);
	
	printf("\nPlease give an input for b (integer) :" );
	scanf("%d",&b);
	
	sum = a+b;
	printf("\nSum of the given inputs is :%d" ,sum );
	
	return 0;
}
