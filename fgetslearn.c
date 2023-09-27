#include <stdio.h>

int main(){
	FILE *Fp_input,*Fp_output;
	char *input_file="fgets.txt",*output_file="fgetsout.txt";
	char line[80];
	int num1,num2,sum;
	
	Fp_input= fopen(input_file,"r");
	Fp_output= fopen(output_file,"w");
	
	fgets(line,80,Fp_input);
	printf("Line :%s\n",line);
	sscanf(line,"%d %d",&num1,&num2);
	sum=num1+num2;
	fprintf(Fp_output,"%d+%d=%d",num1,num2,sum);
	
	
	fclose(Fp_input);
	fclose(Fp_output);
    
    return 0;
}
