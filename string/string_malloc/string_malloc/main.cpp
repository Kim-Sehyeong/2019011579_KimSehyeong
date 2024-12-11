#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// �Լ� ����
void calc(int* array, int ini_size, double* sum, double* avg, double* var, double* std_var)
{
	*sum = 0;
	*var = 0;

	for (int i = 0; i < ini_size; i++)
	{
		*sum += array[i];
	}
	*avg = *sum / ini_size;

	for (int i = 0; i < ini_size; i++)
	{
		*var += pow(array[i] - *avg, 2);
	}
	*var /= ini_size;
	*std_var = sqrt(*var);
}

int main(void)
{
	int ini_size, add_size = 0;
	int* array = NULL;
	double sum, avg, var, std_var = 0.0;

	// �ʱ� �迭 ũ�� �Է�
	printf("Initial size of array: ");
	scanf_s("%d", &ini_size);

	// �޸� ���� �Ҵ�
	array = (int*)malloc(ini_size * sizeof(int));
	if (array == NULL)
	{
		printf("Fail to memory allocation.\n");
		return 1;
	}

	// �ʱ� �迭 �� �Է� �ޱ�
	printf("Input: ");
	for (int i = 0; i < ini_size; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// ù ��° ���, ���
	calc(array, ini_size, &sum, &avg, &var, &std_var);
	printf("�հ�: %.2lf\n", sum);
	printf("���: %.2lf\n", avg);
	printf("�л�: %.2lf\n", var);
	printf("ǥ������: %.2lf\n", std_var);

	// �߰� �迭 ũ�� �Է�
	printf("�߰� �迭 ũ��: ");
	scanf_s("%d", &add_size);

	// �޸� ���Ҵ�
	array = (int*)realloc(array, (ini_size + add_size) * sizeof(int));
	if (array == NULL)
	{
		printf("Fail to memory allocation.\n");
		return 1;
	}

	// �߰� �迭 �� �Է�
	printf("�߰��� ��: ");
	for (int i = ini_size; i < ini_size + add_size; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// Ȯ�� �迭 �� ��° ���, ���
	calc(array, ini_size + add_size, &sum, &avg, &var, &std_var);
	printf("���ο� �հ�: %.2lf\n", sum);
	printf("���ο� ���: %.2lf\n", avg);
	printf("���ο� �л�: %.2lf\n", var);
	printf("���ο� ǥ������: %.2lf\n", std_var);

	free(array);

	return 0;
}