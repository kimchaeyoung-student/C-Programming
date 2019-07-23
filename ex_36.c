#include <stdio.h>
int main(void){
	int a;
	a=output(3,5);
	printf("%d \n", a);
}

int output(int b1, int b2){ //앞 int는 return값의 형식, 괄호속 int는 받는 값의 형식(b1,b2);
	int b3;  //지역변수 (=/=광역변수)
	b3 = b1+b2;
	printf("AAA \n");
	//b=10;
	return b3;
}

