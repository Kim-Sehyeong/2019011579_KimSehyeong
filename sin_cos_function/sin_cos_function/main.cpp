#include <math.h> //라이브러리 추가
#include <stdio.h>


const double pi = 3.141592653589793238462643383; //원주율
double value, rad, value_sin, value_cos = 0.0; //변수 선언
double get_rad(double num); //함수 선언

int main(void)
{
	printf("Input value of degree : ");
	scanf_s("%lf", &value); //각도 값 입력 받음

	if ((value >= 0) && (value <= 180))
	{
		rad = get_rad(value); //라디안 변환 함수 호출
		value_sin = sin(rad); //변수 value_sin에 sin값 저장
		value_cos = cos(rad); //변수 value_cos에 cos값 저장
		printf("sin(%.2lf) = %.2lf, cos(%.2lf) = %.2lf", value, value_sin, value, value_cos);
	}
	else
	{
		printf("ERROR");
	}


	return 0;
}

double get_rad(double num) //라디안 변환 함수 
{
	return num * pi / 180;
}


