#include <stdio.h>
main(){
	int a=10,b,c=10, b1, b2, b3;
	
	printf("%d \n", a++);
	printf("%d \n", ++a);
	printf("%d \n", a--);
	printf("%d \n", --a);
	
	//b=a++ + ++a;
	b1=a++;
	b2=a++;
	b3=b1+b2;
	printf("b : %d \n", b3);
	
	c=c++ + c++ + c++ + c++;
	printf("c : %d \n", c);
}

