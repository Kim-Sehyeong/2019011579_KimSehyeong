#include <stdio.h>

int main(void)
{
	int num_1, num_2, res = 0; //변수 설정
	printf("Input two numbers : ");
	scanf_s("%d %d", &num_1, &num_2); //두 개의 정수를 입력받음

	if (num_2 == 0)
	{
		printf("There aren't any multiples of '0'"); //0으로 나눌 수 있는 정수는 없으므로 경고 문자를 출력
	}
	if (num_2 != 0) //2번째 수가 0이 아닌 정수인 경우
	{
		res = num_1 % num_2; //1번째 수를 2번째 수로 나눈 후 나머지 값을 변수res에 저장

		if (res == 0)
		{
			printf("%d is multiple of %d", num_1, num_2); //나머지 값이 0인 경우 1번째 수를 2번째 수의 배수로 판단
		}
		else
		{
			printf("%d isn't multiple of %d", num_1, num_2); //나머지 값이 0이 아닌 경우 1번째 수를 2번째 수의 배수가 아님
		}
	}
	return 0;
}