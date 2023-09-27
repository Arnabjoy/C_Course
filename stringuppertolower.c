#include <stdio.h>
int main()
{
	char name[] ="Bangladesh";
	printf("%s\n\n",name);
	
	int i,length=10;
	
	for(i=0;i<length;i++){
		if(name[i]>=97 && name[i]<=122){
			name[i] = 'A' + (name[i]-'a');
		}
	}
	printf("COVERSION TO UPPERCASE LETTER : %s",name);
	
	return 0;

}

