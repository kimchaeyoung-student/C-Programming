#include <stdio.h>
int main(void){
	int a;
	a=output(3,5);
	printf("%d \n", a);
}

int output(int b1, int b2){ //�� int�� return���� ����, ��ȣ�� int�� �޴� ���� ����(b1,b2);
	int b3;  //�������� (=/=��������)
	b3 = b1+b2;
	printf("AAA \n");
	//b=10;
	return b3;
}

