#include <stdio.h>

int main(void)
{
	int score, res = 0;
	char grade; //변수 선언

	printf("Input your score : ");
	scanf_s("%d", &score); //점수 값을 입력받음

	if ((score >= 0) && (score <= 100)) //0~100 사이의 점수값을 입력 받을 때 아래의 코드 진행
	{
		res = score / 10; //변수res에 입력 받은 점수를 10으로 나눠 몫을 저장.
						  //0~59점은 점수를 10으로 나누면 그 몫이 0~5이다. 변수res가 0~5일 경우는 F등급을 매긴다.
						  //같은 방법으로 A~D등급을 매긴다.
		switch (res)
		{
		case 0:
			grade = 'F';
			break;
		case 1:
			grade = 'F';
			break;
		case 2:
			grade = 'F';
			break;
		case 3:
			grade = 'F';
			break;
		case 4:
			grade = 'F';
			break;
		case 5:
			grade = 'F';
			break;
		case 6:
			grade = 'D';
			break;
		case 7:
			grade = 'C';
			break;
		case 8:
			grade = 'B';
			break;
		case 9:
			grade = 'A';
			break;
		default:
			grade = 'A';
			break;
		}
		printf("You're grade is %c", grade); //등급을 출력
	}

	else
	{
		printf("You've input wrong score.\n"); //0~100 사이의 점수에서 벗어나면 경고 메시지 출력
	}

	return 0;
}