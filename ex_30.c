#include <stdio.h>
main(){
	int a, i, max=0;
	printf("5���� ���� �Է����ּ��� : ", a);
	for(i=1;i<=5;i++){
		scanf("%d", &a);
		if(a>max)
			max=a;
	}
	
	printf("���� ū ���� %d�Դϴ�. \n", max);
}

