#include <stdio.h>

int main(void)
{
	double num, value_1, value_2 = 0.0;
	int quotient_1, quotient_2 = 0;
	printf("Input value of degree\n");
	scanf_s("%lf", &num);
	quotient_1 = num / 360; // 변수 quotient_1에 num을 360으로 나눈 값의 몫으로 초기화합니다.
	value_1 = num - quotient_1 * 360; // 360 이상의 수를 0 ~ 360 사이의 수로 변환하는 계산식입니다.
	                                         // 360의 배수가 0으로 변환되는 문제가 있습니다.
	quotient_2 = value_1 / 180;         
	value_2 = value_1 - quotient_2 * 360; // 180deg ~ 360deg를 -180deg ~ 0deg로 변환하는 계산식입니다.
	printf("%.2lf[deg] convert to %.2lf[deg]", num, value_2);

	return 0;
}