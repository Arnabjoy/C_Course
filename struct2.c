#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 40

int main(){
	struct student{
		int id;
		char name[NAME_LENGTH];
	};
	
	struct student one;
	one.id=1;
	strcpy(one.name,"ARNAB CHAKRABORTY");
	
	printf("ID : %d  NAME : %s",one.id,one.name);
	return 0;
}
