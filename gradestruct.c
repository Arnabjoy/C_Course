#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
#define MAX_NUMBER 1


typedef struct{
	char first[MAX_LENGTH];
	char last[MAX_LENGTH];
}nametype;

typedef struct{
	int id;
	nametype name;
	char grade[3];
}studenttype;	

void calculate_grade(studenttype *s,int mark);

int main(){
	int i;
	studenttype student[MAX_NUMBER];
	int marks[]={72,85,50};
	
	for(i=0;i<MAX_NUMBER;i++){
		printf("Please enter the id of the student %d :\n",i+1);
		scanf("%d",&student[i].id);
		printf("Please enter the first name of the student %d :\n",i+1);
		scanf("%s",student[i].name.first);
		printf("Please enter the last name of the student %d :\n",i+1);
		scanf("%s",student[i].name.last);
		strcpy(student[i].grade,"");
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<MAX_NUMBER;i++){
		calculate_grade(&student[i],marks[i]);
	}
	
	printf("OUTPUT:\n");
	for(i=0;i<MAX_NUMBER;i++){
		printf("ID NUMBER : %d\n",student[i].id);
		printf("STUDENT NAME : %s %s\n",student[i].name.first,student[i].name.last);
		printf("Grade : %s\n",student[i].grade);
		printf("\n");
	}
	return 0;
}
void calculate_grade(studenttype *s,int mark){
	if(mark>=80){
		strcpy(s->grade,"A+");
	}
	else if(mark>=70){
		strcpy(s->grade,"A");
	}
	else if(mark>=60){
		strcpy(s->grade,"A-");
	}
	else if(mark>=50){
		strcpy(s->grade,"B");
	}
	else if(mark>=40){
		strcpy(s->grade,"C");
	}
	else{
		strcpy(s->grade,"F");
	}
}
