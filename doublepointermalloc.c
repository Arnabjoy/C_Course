#include <stdio.h>
#include <stdlib.h>
#define MAX_CLASS 12


int main(){
	int **array,num[MAX_CLASS];
	int i,j,total_classes,n;
	
	printf("Please enter the number of classes:\n");
	scanf("%d",&total_classes);
	
	array=(int **)malloc(sizeof(int*)*total_classes);
	if(array == NULL){
			printf("MEMORY ALLOCATION FAILED!!\n");
			return 1;
		}
	
	
	for(i=0;i<total_classes;i++){
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
	
	for(i=0;i<total_classes;i++){
		printf("\nCLASS %d:\n",i+1);
		for(j=0;j<num[i];j++){
			printf("STUDENT %d: MARK: %d\n",j+1,array[i][j]);
		}
	}
	
	free(array);
	free(*array);
	return 0;
}
			
	
