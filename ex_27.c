#include <stdio.h>
main(){
	int grade;
	char result, mark;
	fflush(stdin);
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &grade);
	
	if(grade==100){
		result = 'A';
		mark = '+';
	}
	else if(grade<60){
		result = 'F';
		mark = ' ';
	}
	else{
		switch(grade/10){
		case 9 : result = 'A';
		break;
		case 8 : result = 'B';
		break;
		case 7 : result = 'C';
		break;
		case 6 : result = 'D';
		break;
		default : printf("���� �Է� ���� \n");
		}
		if(grade%10>=5)
			mark = '+';
		else
			mark = '0';
	}
	printf("������ %c%c�Դϴ�. \n", result, mark);
	
}
