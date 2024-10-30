#include <stdio.h>

double convert_c(double num); //함수 3개 선언
double convert_f(double num);
void error(void);

double value, temp, result = 0.0; //변수 4개 선언
char type;

int main(void)
{
	printf("Input (degree, celsius or fahrenheit)\n");
	scanf_s("%lf %c", &value, &type, sizeof(type)); //온도 값과 celsius 인지 fahrenheit 인지 구별해서 입력받음

	if (type == 'c') //celsius인 경우 convert_c함수
	{
		result = convert_c(value);
		printf("%.2lf celsius is %.2lf fahrenheit", value, result);
	} 
	else if (type == 'f') //fahrenheit인 경우 convert_f함수
	{
		result = convert_f(value);
		printf("%.2lf fahrenheit is %.2lf celsius", value, result);
	}
	else //c 또는 f 이외의 문자를 입력하면 경고함수
	{
		error();
	}
	

	return 0;
}

double convert_c(double num) //celsius를 fahrenheit로 변환하는 함수
{
	double temp;
	temp = 1.8 * num + 32;
	return temp;
}

double convert_f(double num) //fahrenheit를 celsius로 변환하는 함수
{
	double temp;
	temp = (num - 32) / 1.8;
	return temp;
}

void error(void) //경고 문자 출력하는 함수
{
	printf("Wrong input. Please check your input again.");
}
