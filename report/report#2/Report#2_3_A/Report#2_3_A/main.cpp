#include <stdio.h>

int main(void)
{
	int score = 0;
	char grade; //���� ����

	printf("Input your score : ");
	scanf_s("%d", &score); //���� �Է� �ޱ�

	if ((score >= 90) && (score <= 100)) //���� ������ �´� ��� �ű�
	{
		grade = 'A';
	}
	else if ((score >= 80) && (score <= 89))
	{
		grade = 'B';
	}
	else if ((score >= 70) && (score <= 79))
	{
		grade = 'C';
	}
	else if ((score >= 60) && (score <= 69))
	{
		grade = 'D';
	}
	else if ((score >= 0) && (score <= 59))
	{
		grade = 'F';
	}
	else
	{
		printf("You've input wrong score"); //������ 0~100���̸� ����� ��� �޽��� ���
	}
	printf("Your grade is %c", grade); //��� ���
	return 0;
}