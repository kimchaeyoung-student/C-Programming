#include <stdio.h>
main(){
	int a, b, answer, t=1, ch;
	
	re_quiz:
	printf("�� ���� �Է����ּ��� : ");
	scanf("%d %d", &a, &b);
	//printf("%d+%d=%d \n", a,b,a+b);
	
	re_answer:
	printf("�� ���� �� : ");
	scanf("%d", &answer);
	if(answer==(a+b)){
		printf("����! \n");
		printf("��� �����Ͻðڽ��ϱ�?(y/n) : ");
		fflush(stdin); //�޸𸮸� ����ش� 
		scanf("%c", ch);
		if(ch=='y')
			goto re_quiz;
	}
	else{
		printf("����! \n");
		t=t+1; //���� Ƚ�� ���ϱ�, t �ʱ�ȭ �ʼ�
		goto re_answer;
	}
	printf("����� : %.0f%% \n", 1/(float)t*100); //%d==%.0f
}
//����!!
