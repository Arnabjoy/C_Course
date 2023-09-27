#include <stdio.h>

int main(){
	struct student{
		int id;
		char *name;
	};
	
	struct student one;
	one.id = 1;
	one.name="ARNAB CHAKRABORTY";
	
	printf("ROLL NUMBER : %d  NAME : %s ",one.id,one.name);
	
	return 0;
}
	
