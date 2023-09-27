#include <stdio.h>
#include <stdlib.h>
#define MAX_CLASS 5


int main(){
	int *array[MAX_CLASS],num[MAX_CLASS];
	int i,j,n;
	
	for(i=0;i<MAX_CLASS;i++){
		printf("Please enter the number of students for class %d :\n",i+1);
		scanf("%d",&n);
		num[i]=n;
		array[i]=(int *)malloc(sizeof(int)*n);
		if(array[i]== NULL){
			printf("MEMORY ALLOCATION FAILED!!");
			return 1;
		}
		for(j=0;j<n;j++){
			printf("Please enter the mark of student %d :\n",j+1);
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	
	printf("OUTPUT:\n");
	
	for(i=0;i<MAX_CLASS;i++){
		printf("CLASS %d:\n",i+1);
		for(j=0;j<num[i];j++){
			printf("STUDENT %d: MARK: %d\n",j+1,array[i][j]);
		}
	}
	
	free(*array);
	return 0;
}
			
	
	
		
	
