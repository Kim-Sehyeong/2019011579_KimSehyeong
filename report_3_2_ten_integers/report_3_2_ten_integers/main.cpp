#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define INTEGERS 10 // 몇개의 정수를 뽑을지 정해서 그 값을 메크로 명에 정의

void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandInt(unsigned int nMin, unsigned int nMax) //난수를 생성해서 사용자가 입력한 최솟값과 최댓값 사이의 값만 변수 nNum에 저장
{
    unsigned int nNum = 0;
    while (1)
    {
        nNum = rand();
        if ((nNum >= nMin) && (nNum <= nMax)) 
            break;
    }
    return nNum; //nNum에 저장된 값을 반환
}

unsigned int nSquNumSum(unsigned int num, unsigned int res) //난수의 제곱의 합
{
    return res + pow(num, 2);
}

double dAvg(unsigned int num) // 난수의 합의 평균
{
    return num / INTEGERS;
}

double dSquDevSum(unsigned int squsum, unsigned int sum, double avg) //편차의 제곱의 합
{
    return squsum - (2 * sum * avg) - pow(avg, 3);
}

double dVar(unsigned int num) //분산
{
    return num / INTEGERS;
}

double dStdDev(double num) //표준편차
{
    return sqrt(num); //제곱근을 사용하기 위한 math.h의 함수
}

int main(void)
{
    GenRandSeed(); //난수 함수 호출

    int Min = 0; //변수 선언
    int Max = 0;
    int Num = 0;
    int Sum = 0;
    int SquSum = 0;
    double Avg = 0.0;
    double ResSquDevSum = 0.0;
    double ResVar = 0.0;
    double ResStdDev = 0.0;

    printf("Input the range of number : (minimum, maximum)\n");
    scanf_s("%d %d", &Min, &Max); // 최솟값과 최댓값을 입력받음

    for (int i = 0; i < INTEGERS; i++) //INTEGERS에 정의된 상수값만큼 반복
    {
        Num = GenRandInt(Min, Max); //Num에 난수 저장
        Sum += Num; //반복문이 끝날 때 난수의 총합이 저장됨
        SquSum = nSquNumSum(Num, SquSum); // 난수의 제곱의 합
    }
    printf("\n");
    Avg = dAvg(Sum); //평균
    ResSquDevSum = dSquDevSum(SquSum, Sum, Avg); //편차의 제곱의 합
    ResVar = dVar(ResSquDevSum); // 분산
    ResStdDev = dStdDev(ResVar); // 표준편차

    printf("Result (Sum, Variation, Standard variation) : %d, %.2lf, %.2lf", Sum, ResVar, ResStdDev); //합, 분산, 표준편차 출력

    return 0;
}