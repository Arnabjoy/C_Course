#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 20

struct nametype{
	char first[MAX_LENGTH];
	char last[MAX_LENGTH];
};

struct student{
	int id;
	struct nametype name;
};

int main(){
	struct student one;
	printf("Please enter the student id :\n");
	scanf("%d",&one.id);
    printf("Please enter the student first name :\n");
	scanf("%s",one.name.first);
	printf("Please enter the student last name :\n");
	scanf("%s",one.name.last);
	printf("ID : %d  NAME:%s %s",one.id,one.name.first,one.name.last);
	return 0;
}
