#include <stdio.h>
main(){
	int a,b,c, max=0;
	
	printf("3���� ������ �Է��ϼ��� : ", a, b, c);
	fflush(stdin);
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){ //AND���� (a>b && a>c)
		max = a;
		if(max<c)
			max=c;
	}
	else{
		max = b;
		if(max<c)
			max=c;
	}
	printf("���� ū ���� %d \n", max);
}

