#include <stdio.h>
main(){
	char ch;
	
	do{
		fflush(stdin);
		printf("��������(y/n) : ");
		//scanf("%c", &ch);
		ch=getchar(); 
	
		if(ch=='y')
			quiz();
		else{
			printf("�����ϼ̽��ϴ�. \n");
			break;
		}
	} while(1);
}

quiz(){
	int a, b, answer, t=1;
	char ch;
	printf("�� ���� �Է����ּ��� : ");
	scanf("%d %d", &a, &b);
	
	re_answer:
	printf("�� ���� �� : ");
	scanf("%d", &answer);
	
	if(answer==(a+b)){
		printf("����! \n");
	}
	else{
		printf("����! \n");
		t=t+1; //���� Ƚ�� ���ϱ�, t �ʱ�ȭ �ʼ�
		goto re_answer;
	}
	printf("����� : %.0f%% \n", 1/(float)t*100); //%d==%.0f
}

