#include <stdio.h>

int main(void)
{
	double num, value_1, value_2 = 0.0;
	int quotient_1, quotient_2 = 0;
	printf("Input value of degree\n");
	scanf_s("%lf", &num);
	quotient_1 = num / 360; // ���� quotient_1�� num�� 360���� ���� ���� ������ �ʱ�ȭ�մϴ�.
	value_1 = num - quotient_1 * 360; // 360 �̻��� ���� 0 ~ 360 ������ ���� ��ȯ�ϴ� �����Դϴ�.
	                                         // 360�� ����� 0���� ��ȯ�Ǵ� ������ �ֽ��ϴ�.
	quotient_2 = value_1 / 180;         
	value_2 = value_1 - quotient_2 * 360; // 180deg ~ 360deg�� -180deg ~ 0deg�� ��ȯ�ϴ� �����Դϴ�.
	printf("%.2lf[deg] convert to %.2lf[deg]", num, value_2);

	return 0;
}