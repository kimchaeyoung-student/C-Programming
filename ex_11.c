#include <stdio.h>

int main(){
	int a, b, c;
	char ch1 = 'A', ch2 = 'B', ch3;
	//char c[20];
	
	a = 10;
	c = a+(b=(c=5));
	printf("%d \n", c);
	
	ch3 = ch1; //+ ch2; //오류는 발생하지 않지만 의미가 없다. 
	printf("ch3 : %c %d \n", ch3, ch3);
	
}

