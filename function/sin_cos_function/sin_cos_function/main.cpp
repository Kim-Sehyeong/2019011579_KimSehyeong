#include <math.h> //���̺귯�� �߰�
#include <stdio.h>


const double pi = 3.141592653589793238462643383; //������
double value, rad, value_sin, value_cos = 0.0; //���� ����
double get_rad(double num); //�Լ� ����

int main(void)
{
	printf("Input value of degree : ");
	scanf_s("%lf", &value); //���� �� �Է� ����

	if ((value >= 0) && (value <= 180))
	{
		rad = get_rad(value); //���� ��ȯ �Լ� ȣ��
		value_sin = sin(rad); //���� value_sin�� sin�� ����
		value_cos = cos(rad); //���� value_cos�� cos�� ����
		printf("sin(%.2lf) = %.2lf, cos(%.2lf) = %.2lf", value, value_sin, value, value_cos);
	}
	else
	{
		printf("ERROR");
	}


	return 0;
}

double get_rad(double num) //���� ��ȯ �Լ� 
{
	return num * pi / 180;
}


