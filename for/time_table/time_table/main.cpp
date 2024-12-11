#include <stdio.h>

int main(void)
{
	int num = 0; //변수 설정
	printf("If you want to see every time tables, input any number except 2~9\n");
	printf("Input number of time table : ");
	scanf_s("%d", &num); //몇 단의 구구단을 출력할지 정수값 입력받기

	if ((num >= 2) && (num <= 9)) //입력값이 2에서 9사이의 정수일 경우
	{
		int i;
		for (i = 0; i < 9; i++)
		{
			printf("%d * %d = %d\n", num, i + 1, 2 * (i + 1)); //2~9단 중 입력값에 따른 곱셈식 출력
		}

	}

	else //입력값이 2~9 사이의 정수가 아닌 경우
	{
		int i, j;
		for (i = 1; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				printf("%d * %d = %d\n", i + 1, j + 1, (i + 1) * (j + 1)); //2단부터 9단까지 모두 출력
			}
			printf("\n");
		}
	}
	return 0;
}