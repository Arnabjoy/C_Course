#include <stdio.h>
#include <string.h>
#define NAME_LENGTH 40

struct student{
	int id;
	char name[NAME_LENGTH];
};
int main(){
	struct student one;
	printf("Please enter student id:\n");
	scanf("%d",&one.id);
	printf("Please enter student name:\n");
	scanf(" %[^\n]",one.name);
	
	printf("\nID :%d  Name: %s",one.id,one.name);
	return 0;
}
