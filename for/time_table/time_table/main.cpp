#include <stdio.h>

int main(void)
{
	int num = 0; //���� ����
	printf("If you want to see every time tables, input any number except 2~9\n");
	printf("Input number of time table : ");
	scanf_s("%d", &num); //�� ���� �������� ������� ������ �Է¹ޱ�

	if ((num >= 2) && (num <= 9)) //�Է°��� 2���� 9������ ������ ���
	{
		int i;
		for (i = 0; i < 9; i++)
		{
			printf("%d * %d = %d\n", num, i + 1, 2 * (i + 1)); //2~9�� �� �Է°��� ���� ������ ���
		}

	}

	else //�Է°��� 2~9 ������ ������ �ƴ� ���
	{
		int i, j;
		for (i = 1; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				printf("%d * %d = %d\n", i + 1, j + 1, (i + 1) * (j + 1)); //2�ܺ��� 9�ܱ��� ��� ���
			}
			printf("\n");
		}
	}
	return 0;
}