#include <stdio.h>

int main(void)
{
	int num, res = 0; //변수 설정
	printf("Input a number : ");
	scanf_s("%d", &num); //정수를 입력받음

	res = num % 2; //변수 res에 num/2의 나머지 값을 저장

	if (res == 0)
	{
		printf("%d is even number.", num); //res가 0일 경우 입력 받은 정수가 짝수라는 문장을 출력
	}
	else
	{
		printf("%d is odd number.", num); //res가 0이 아닐 경우 입력 받은 정수가 홀수라는 문장을 출력
	}
	return 0;
}