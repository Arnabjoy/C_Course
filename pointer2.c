#include <stdio.h>
int main(){
	int x=10;
	int *p;
	
	p=&x;
	
	printf("Address of x: %p\n",p);
	printf("Value of x: %d ",*p);
	
	return 0;
}
