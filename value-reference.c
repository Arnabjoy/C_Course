#include <stdio.h>
 void a_plus_ten(int a);
 void a_plus_ten1(int *a);
 
 int main(){
	 int a=5;
	 a_plus_ten(a);\\call by value
	 printf("a=%d\n",a);
	 a_plus_ten1(&a);\\call by reference
	 printf("a=%d",a);
	 return 0;
 }
 void a_plus_ten(int a){
	a=a+10;
 }
 void a_plus_ten1(int *a){
	 *a=*a+10;
 }
 
