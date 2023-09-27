#include <stdio.h>
int main()
{
	int n;
	printf("Please enter a number between 1-10 : ");
	scanf("%d",&n);
	
	if (n>10){
		printf("ERROR!!You did not enter between 1-10");
	}
	
	else {
		while(n<=10){
			printf("%d\n",n);
			n++;
		}
	}
    return 0;
}
