#include <stdio.h>

double convert_c(double num); //�Լ� 3�� ����
double convert_f(double num);
void error(void);

double value, temp, result = 0.0; //���� 4�� ����
char type;

int main(void)
{
	printf("Input (degree, celsius or fahrenheit)\n");
	scanf_s("%lf %c", &value, &type, sizeof(type)); //�µ� ���� celsius ���� fahrenheit ���� �����ؼ� �Է¹���

	if (type == 'c') //celsius�� ��� convert_c�Լ�
	{
		result = convert_c(value);
		printf("%.2lf celsius is %.2lf fahrenheit", value, result);
	} 
	else if (type == 'f') //fahrenheit�� ��� convert_f�Լ�
	{
		result = convert_f(value);
		printf("%.2lf fahrenheit is %.2lf celsius", value, result);
	}
	else //c �Ǵ� f �̿��� ���ڸ� �Է��ϸ� ����Լ�
	{
		error();
	}
	

	return 0;
}

double convert_c(double num) //celsius�� fahrenheit�� ��ȯ�ϴ� �Լ�
{
	double temp;
	temp = 1.8 * num + 32;
	return temp;
}

double convert_f(double num) //fahrenheit�� celsius�� ��ȯ�ϴ� �Լ�
{
	double temp;
	temp = (num - 32) / 1.8;
	return temp;
}

void error(void) //��� ���� ����ϴ� �Լ�
{
	printf("Wrong input. Please check your input again.");
}
