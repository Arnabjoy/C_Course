#include <stdio.h>
int main ()
{
	int num1,num2;
	printf("Please enter your first number: ");
	scanf ("%d",&num1);
	
	printf("Please enter your second number: ");
    scanf ("%d",&num2);
    
    printf("SUM:%d+%d = %d",num1,num2,num1+num2);
    
    printf("\nSUBTRACTION:%d-%d = %d",num1,num2,num1-num2);
    
    printf("\nMULTIPLICATION:%d*%d = %d",num1,num2,num1*num2);
    
    printf("\nDIVIDE:%d/%d = %d\n",num1,num2,num1/num2);
    
    return 0;
}
    
