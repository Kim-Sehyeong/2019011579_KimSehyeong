#include <stdio.h>

int main(void)
{
	int num_1, num_2, res = 0; //���� ����
	printf("Input two numbers : ");
	scanf_s("%d %d", &num_1, &num_2); //�� ���� ������ �Է¹���

	if (num_2 == 0)
	{
		printf("There aren't any multiples of '0'"); //0���� ���� �� �ִ� ������ �����Ƿ� ��� ���ڸ� ���
	}
	if (num_2 != 0) //2��° ���� 0�� �ƴ� ������ ���
	{
		res = num_1 % num_2; //1��° ���� 2��° ���� ���� �� ������ ���� ����res�� ����

		if (res == 0)
		{
			printf("%d is multiple of %d", num_1, num_2); //������ ���� 0�� ��� 1��° ���� 2��° ���� ����� �Ǵ�
		}
		else
		{
			printf("%d isn't multiple of %d", num_1, num_2); //������ ���� 0�� �ƴ� ��� 1��° ���� 2��° ���� ����� �ƴ�
		}
	}
	return 0;
}