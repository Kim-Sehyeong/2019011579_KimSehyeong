#include <stdio.h>

int main(void)
{
	int num_1, num_2, num_b, num_s, remain, maxcomdiv, leacommul, quo_1, quo_2 = 0;
	printf("Input two numbers : ");
	scanf_s("%d %d", &num_1, &num_2);

	if (num_1 > num_2) //ū �� ���� �� �з�
	{
		num_b = num_1;
		num_s = num_2;
	}
	else
	{
		num_b = num_2;
		num_s = num_1;
	}

	//�ִ����� ���ϴ� ����
	do { 
		remain = num_b % num_s; //ū ���� ���� ���� ���� �� �������� ����
		num_b = num_s;
		num_s = remain;
	} while (num_s != 0);

	maxcomdiv = num_b; //�ִ�����
	quo_1 = num_1 / maxcomdiv; //���μ�1
	quo_2 = num_2 / maxcomdiv; //���μ�2
	leacommul = maxcomdiv * quo_1 * quo_2; // �ּҰ���� = �ִ����� * �� ���� ���μ�

	printf("The maximum common divisor of two numbers : %d\n", maxcomdiv);
	printf("The minimum common multiple of two numbers : %d\n", leacommul);


	return 0;
}