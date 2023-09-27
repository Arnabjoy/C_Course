#include <stdio.h>
int main()
{
	int first_term[]={40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,90};
	
	int second_term[]={52,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40};
	
	int final_term[]={60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50,60,70,80,40,50};
	
	int i;
    double final_result[40];
	
	for (i=0;i<40;i++){
		
	    final_result[i]= (first_term[i]/4) + (second_term[i]/4) + (final_term[i]/2);
	}
	
	for(i=1;i<=40;i++){
		
		printf("Roll No : %d\tTotal Marks :%0.0lf\n\n",i,final_result[i-1]);
	}
	
	int marks,count;
	
	for(marks=50;marks<=80;marks++){
		count=0;
		for (i=0;i<40;i++){
		if(final_result[i] == marks){
			count++;
		}
		
	}
	    if(count ==0){
			continue;
		}
		else{
		printf("Marks:%d\tNumber of students got this marks : %d\n",marks,count);
	}
	}
		
	return 0;
	
}

