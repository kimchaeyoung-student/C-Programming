#include <stdio.h>
main(){
	int a=10, b=0, c=0;
	b=++a; //a=a+1; b=a;
	printf("%d %d \n", a, b);
	
	a=10;
	c=a++; //c=a; a=a+1;
	printf("%d %d \n", a, c);
}

