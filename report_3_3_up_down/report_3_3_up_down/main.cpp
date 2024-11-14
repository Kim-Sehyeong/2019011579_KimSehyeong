#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHANCE 10 // 몇 번의 기회를 줄지를 정해 매크로명에 정의

void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandInt(void) // 난수를 반환하는 함수
{
    unsigned int nNum = 0;
    nNum = rand();
    return nNum;
}

int main(void)
{
    GenRandSeed(); // 난수 함수 호출

    int num = 0; //변수 선언
    int nRanNum = 0;
    nRanNum = GenRandInt(); // 변수 nRanNum에 난수 저장

    for (int i = 0; i < CHANCE; i++) // 매크로명에 정의된 상수값만큼 반복문 반복
    {
        printf("Input a number.\n");
        scanf_s("%d", &num); // 사용자의 값을 입력받음
        if (i < CHANCE - 1) //기회가 2번 이상 남았을 때
        {
            if (num == nRanNum) // 정답
            {
                printf("Correct!\n");
                break;
            }
            else if (num > nRanNum) // 오답
            {
                printf("Down. [chance : %d / %d]\n", CHANCE - (i + 1), CHANCE); // 남은 기회와 주어진 기회를 출력
            }
            else
            {
                printf("Up. [chance : %d / %d]\n", CHANCE - (i + 1), CHANCE);
            }
        }
        else // 기회가 1번 남았을 때
        {
            if (num == nRanNum) // 정답
            {
                printf("Correct!\n");
            }
            else // 오답
            {
                printf("The end... The answer is %d\n", nRanNum);
            }
        }
    }
    return 0;
}