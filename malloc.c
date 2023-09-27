#include <stdio.h>
#include <stdlib.h>

int main(){
	int *marks;
	int i,n;
	printf("Please enter the number of students:\n");
	scanf("%d",&n);
	
	marks=(int *)malloc(sizeof(int)*n);
	if(marks== NULL){
		printf("MEMORY ALLOCATION FAILED!!\n");
		return 1;
	}
	printf("Please enter the marks of the student:\n");
	for(i=0;i<n;i++){
		scanf("%d",&marks[i]);
	}
	printf("The marks of the students are :\n");
	for(i=0;i<n;i++){
		printf("%d\n",marks[i]);
	}
	free(marks);
	return 0;
}
	
		
