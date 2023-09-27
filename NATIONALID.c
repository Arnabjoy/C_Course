#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
#define MAX_NUMBER 1

typedef struct{
	char first[MAX_LENGTH];
    char last[MAX_LENGTH];
    char firstf[MAX_LENGTH];
    char lastf[MAX_LENGTH];
    char firstm[MAX_LENGTH];
    char lastm[MAX_LENGTH];
}nametype;

typedef struct{
	int date;
	int month;
	int year;
}datetype;

typedef struct{
	nametype name;
	nametype fathername;
	nametype mothername;
	int id;
	datetype birthdate;
}citizentype;

int main(){
	int i;
	citizentype citizen[MAX_NUMBER];
	for(i=0;i<MAX_NUMBER;i++){
		printf("Please enter first name of the citizen %d :\n",i+1);
		scanf("%s",citizen[i].name.first);
		printf("Please enter last name of the citizen %d :\n",i+1);
		scanf("%s",citizen[i].name.last);
		printf("Please enter first name of the father of citizen %d  :\n",i+1);
		scanf("%s",citizen[i].name.firstf);
		printf("Please enter last name of the father of citizen %d :\n",i+1);
		scanf("%s",citizen[i].name.lastf);
		printf("Please enter first name of the mother of citizen %d  :\n",i+1);
		scanf("%s",citizen[i].name.firstm);
		printf("Please enter last name of the mother of citizen %d :\n",i+1);
		scanf("%s",citizen[i].name.lastm);
		printf("Please enter the birthdate of the citizen %d in dd/mm/yy order:\n",i+1);
		scanf("%d/%d/%d",&citizen[i].birthdate.date,&citizen[i].birthdate.month,&citizen[i].birthdate.year);
		printf("Please enter ID number of the citizen %d :\n",i+1);
		scanf("%d",&citizen[i].id);
		printf("\n");
	}
	printf("\n");
	printf("Output :\n\n");
	printf("\t\tGOVERNMENT OF THE PEOPLE's REPUBLIC OF BANGLADESH\n");
	printf("\t\t\t\tNATIONAL ID CARD\n");
	
	for(i=0;i<MAX_NUMBER;i++){
		printf("\tCITIZEN:%d\n",i+1);
		printf("\tNAME OF THE CITIZEN: %s %s\n",citizen[i].name.first,citizen[i].name.last);
		printf("\tNAME OF THE FATHER : %s %s\n",citizen[i].name.firstf,citizen[i].name.lastf);
	    printf("\tNAME OF THE MOTHER : %s %s\n",citizen[i].name.firstm,citizen[i].name.lastm);
	    printf("\tDATE OF BIRTH(dd//mm//yy) : %d/%d/%d\n",citizen[i].birthdate.date,citizen[i].birthdate.month,citizen[i].birthdate.year);
	    printf("\tID NUMBER : %d\n",citizen[i].id);
	    printf("\n");
	}
	
	return 0;
}
	
		  
		    
		    
		
	
	
