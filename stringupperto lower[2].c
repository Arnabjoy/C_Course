#include <stdio.h>
int main()
{
	char name[] ="BANGLADESH";
	printf("%s\n\n",name);
	
	int i,length=10;
	
	for(i=0;i<length;i++){
		if(name[i]>=65 && name[i]<=90){
			name[i] = 'a' + (name[i]-'A');
		}
	}
	printf("COVERSION TO LOWERCASE LETTER : %s",name);
	
	return 0;

}


