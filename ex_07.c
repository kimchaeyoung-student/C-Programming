#include <stdio.h>

int main()
{
	int a=5, b=3;
	int d1 = a/b; //�Ͻ��� ����ȯ 
	
	printf("value of d1 : %d \n", a);
	
	double d2 = (double)a / b; //����� ����ȯ 
	
	printf("value of d1 : %f \n", d1);
	printf("value of d1 : %d \n", d1);
	printf("value of d2 : %lf \n", d2);
}

