#include <stdio.h>
int main()
{
	int n,i,sum=0;
	
	printf("Please enter the last term of the odd series :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i=i+2){
		sum= sum + i ;
		}
	printf("\nThe sum is :%d",sum);
		
	return 0;
	
}
