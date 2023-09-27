#include <stdio.h>

int main(){
	 FILE *fp_input,*fp_output;
	 char *input="in.txt";
	 char *output="out.txt";
	 int num1,num2,sum;
	 
	 fp_input=fopen(input,"r");
	 fp_output=fopen(output,"w");
	 
	 fscanf(fp_input,"%d",&num1);
	 fscanf(fp_input,"%d",&num2);
	 
	 sum=num1+num2;
	 printf("The sum is: %d+%d =%d",num1,num2,sum);
	 fprintf(fp_output,"The sum is: %d+%d =%d",num1,num2,sum);
	 
	 fclose(fp_input);
	 fclose(fp_output);
	 return 0;
 }
