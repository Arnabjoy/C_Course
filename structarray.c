#include <stdio.h>
#include <string.h>

#define MAX_NUMBER_STUDENTS 2
#define MAX_NAME_LENGTH 20

typedef struct{
	char first[MAX_NAME_LENGTH];
	char last[MAX_NAME_LENGTH];
}nametype;

typedef struct{
	int id;
	nametype name;
}studenttype;

int main(){
	studenttype student[MAX_NUMBER_STUDENTS];
	int i;
	
	for(i=0;i<MAX_NUMBER_STUDENTS;i++){
		printf("Please enter the id of the student %d:\n",i+1);
		scanf("%d",&student[i].id);
		printf("Please enter the first name of the student %d :\n",i+1);
		scanf("%s",student[i].name.first);
		printf("Please enter the last name of the student %d :\n",i+1);
		scanf("%s",student[i].name.last);
	}
	printf("\n");
	printf("Output:\n\n");
	
	for(i=0;i<MAX_NUMBER_STUDENTS;i++){
		printf("STUDENT ID: %d\n",student[i].id);
		printf("NAME : %s %s\n",student[i].name.first,student[i].name.last);
		printf("\n");
	}
	return 0;
}
		
