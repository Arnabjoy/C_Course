#include <stdio.h>

int main(){
	FILE *fp;
	char filename[]="my_file.txt";
	
	fp=fopen(filename,"w");
	
	fprintf(fp,"This file is created by my program!\n");
	fprintf(fp,"I am so happy\n");
	
	fclose(fp);
	fp=fopen(filename,"a");
	fprintf(fp,"I am adding a new line");
	fclose(fp);
	return 0;
}
