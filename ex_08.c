#include <stdio.h>
main(){
	int num1, num2;
	printf("num1 �Է� : ");
	scanf("%d", &num1);
	printf("num2 �Է� : ");
	scanf("%d", &num2);
	
	printf("�� �� : %d \n", num1+num2);
	printf("�� �� : %d \n", num1-num2);
	printf("�� �� : %d \n", num1*num2);
	printf("�� �� : %.2f \n", num1/(float)num2);
	// .2 �� �Ҽ����� ���ڸ������� ��µǰ� �ϴ� ��  
} 

