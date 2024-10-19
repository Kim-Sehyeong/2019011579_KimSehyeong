#include <stdio.h>

int main(void)
{
	int num_1, num_2, res = 0; //변수 선언
	printf("Input two numbers : ");
	scanf_s("%d %d", &num_1, &num_2); //두 정수를 입력 받음

	if (num_2 == 0)
	{
		printf("There aren't any multiples of '0'\n"); //두 번째 수가 0인 경우 경고 메시지
	}
	if (num_2 != 0) //두 번째 수가 0이 아닌 경우
	{
		res = num_1 % num_2; //첫 번째 수를 두 번째 수로 나눔
		switch (res)
		{
		case 0:
			printf("%d is multiple of %d", num_1, num_2); //나머지가 0이면 첫 번째 수는 두 번째 수의 배수
			break;

		default:
			printf("%d isn't multiple of %d", num_1, num_2); //나머지가 0이 아니면 첫 번째 수는 두 번째 수의 배수가 아님
			break;
		}
	}
	return 0;
}