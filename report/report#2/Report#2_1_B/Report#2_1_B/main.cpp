#include <stdio.h>

int main(void)
{
	int num, res = 0; //���� ����
	printf("Input a number : "); 
	scanf_s("%d", &num); //������ �Է¹���

	res = num % 2; //�Է� ���� ������ 2�� ���� �� �� ������ ���� ���� res�� ����

	switch (res)
	{
	case 0:
		printf("%d is even number.", num); //res�� 0�� ����Ǿ� �ִ� ��� ¦����� ���� ���
		break;

	default:
		printf("%d number is odd number.", num); //res�� 0�� �ƴ� ���� ����Ǿ����� �� Ȧ����� ���� ���
		break;
	}
	return 0;
}