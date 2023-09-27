#include <stdio.h>
char string_length(char str[]){
	int i,length=0;
	
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	return length;
}
int main(){
	
char array[100];
int length;
while(1==scanf("%s",array)){
	length= string_length(array);
	printf("length:%d",length);
}
return 0;
}

