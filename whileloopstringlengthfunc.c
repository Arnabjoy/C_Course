#include <stdio.h>
char string_length(char str[]){
	int length=0;
	
	while(str[length]!='\0'){
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
