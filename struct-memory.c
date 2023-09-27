#include <stdio.h>

typedef struct{
	int n;
	double d;
	char c;
}s1;

typedef struct{
	char c1;
	char c2;
	char c3;
	char c4;
	int n;
	double d;
}s2;

int main(){
	
	printf("char size : %lu bytes\n",sizeof(char));
	printf("int size : %lu bytes\n",sizeof(int));
    printf("double size : %lu bytes\n",sizeof(double));
    printf("s1 size : %lu bytes\n",sizeof(s1));
    printf("s2 size : %lu bytes\n",sizeof(s2));
    return 0;
}
