#include <stdio.h>

int main(void)
{
	int score, res = 0;
	char grade; //���� ����

	printf("Input your score : ");
	scanf_s("%d", &score); //���� ���� �Է¹���

	if ((score >= 0) && (score <= 100)) //0~100 ������ �������� �Է� ���� �� �Ʒ��� �ڵ� ����
	{
		res = score / 10; //����res�� �Է� ���� ������ 10���� ���� ���� ����.
						  //0~59���� ������ 10���� ������ �� ���� 0~5�̴�. ����res�� 0~5�� ���� F����� �ű��.
						  //���� ������� A~D����� �ű��.
		switch (res)
		{
		case 0:
			grade = 'F';
			break;
		case 1:
			grade = 'F';
			break;
		case 2:
			grade = 'F';
			break;
		case 3:
			grade = 'F';
			break;
		case 4:
			grade = 'F';
			break;
		case 5:
			grade = 'F';
			break;
		case 6:
			grade = 'D';
			break;
		case 7:
			grade = 'C';
			break;
		case 8:
			grade = 'B';
			break;
		case 9:
			grade = 'A';
			break;
		default:
			grade = 'A';
			break;
		}
		printf("You're grade is %c", grade); //����� ���
	}

	else
	{
		printf("You've input wrong score.\n"); //0~100 ������ �������� ����� ��� �޽��� ���
	}

	return 0;
}