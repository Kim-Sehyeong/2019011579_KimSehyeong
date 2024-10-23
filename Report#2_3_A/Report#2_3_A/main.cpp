#include <stdio.h>

int main(void)
{
	int score = 0;
	char grade; //변수 선언

	printf("Input your score : ");
	scanf_s("%d", &score); //점수 입력 받기

	if ((score >= 90) && (score <= 100)) //점수 구간에 맞는 등급 매김
	{
		grade = 'A';
	}
	else if ((score >= 80) && (score <= 89))
	{
		grade = 'B';
	}
	else if ((score >= 70) && (score <= 79))
	{
		grade = 'C';
	}
	else if ((score >= 60) && (score <= 69))
	{
		grade = 'D';
	}
	else if ((score >= 0) && (score <= 59))
	{
		grade = 'F';
	}
	else
	{
		printf("You've input wrong score"); //점수가 0~100사이를 벗어나면 경고 메시지 출력
	}
	printf("Your grade is %c", grade); //등급 출력
	return 0;
}