#include <stdio.h>

int main(void)
{
	int num, res = 0; //���� ����
	printf("Input a number : ");
	scanf_s("%d", &num); //������ �Է¹���

	res = num % 2; //���� res�� num/2�� ������ ���� ����

	if (res == 0)
	{
		printf("%d is even number.", num); //res�� 0�� ��� �Է� ���� ������ ¦����� ������ ���
	}
	else
	{
		printf("%d is odd number.", num); //res�� 0�� �ƴ� ��� �Է� ���� ������ Ȧ����� ������ ���
	}
	return 0;
}