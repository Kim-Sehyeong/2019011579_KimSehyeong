#include <stdio.h>

int main(void)
{
	int num, res = 0; //변수 설정
	printf("Input a number : "); 
	scanf_s("%d", &num); //정수를 입력받음

	res = num % 2; //입력 받은 정수를 2로 나눈 후 그 나머지 값을 변수 res에 저장

	switch (res)
	{
	case 0:
		printf("%d is even number.", num); //res에 0이 저장되어 있는 경우 짝수라는 문장 출력
		break;

	default:
		printf("%d number is odd number.", num); //res에 0이 아닌 수가 저장되어있을 때 홀수라는 문장 출력
		break;
	}
	return 0;
}