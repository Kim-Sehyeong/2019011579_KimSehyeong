#include <stdio.h>

int main(void)
{
	int num_1, num_2, res = 0; //���� ����
	printf("Input two numbers : ");
	scanf_s("%d %d", &num_1, &num_2); //�� ������ �Է� ����

	if (num_2 == 0)
	{
		printf("There aren't any multiples of '0'\n"); //�� ��° ���� 0�� ��� ��� �޽���
	}
	if (num_2 != 0) //�� ��° ���� 0�� �ƴ� ���
	{
		res = num_1 % num_2; //ù ��° ���� �� ��° ���� ����
		switch (res)
		{
		case 0:
			printf("%d is multiple of %d", num_1, num_2); //�������� 0�̸� ù ��° ���� �� ��° ���� ���
			break;

		default:
			printf("%d isn't multiple of %d", num_1, num_2); //�������� 0�� �ƴϸ� ù ��° ���� �� ��° ���� ����� �ƴ�
			break;
		}
	}
	return 0;
}