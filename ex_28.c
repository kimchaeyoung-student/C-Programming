#include <stdio.h>
main(){
	int a,b,c; //3���� ���� �Է� (�� �� ���� ū ��)
	
	printf("3���� ������ �Է��ϼ��� : ", a, b, c);
	fflush(stdin);
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
		if(a>c){
			printf("���� ū ���� %d�Դϴ�. \n", a);
		}
		else{
			printf("���� ū ���� %d�Դϴ�. \n", c);
		}
	}
	else{
		if(b>c){
			printf("���� ū ���� %d�Դϴ�. \n", b);
		}
		else{
		printf("���� ū ���� %d�Դϴ�. \n", c);
		}
	}
}

