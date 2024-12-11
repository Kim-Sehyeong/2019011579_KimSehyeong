#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define INTEGERS 10 // ��� ������ ������ ���ؼ� �� ���� ��ũ�� �� ����

void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandInt(unsigned int nMin, unsigned int nMax) //������ �����ؼ� ����ڰ� �Է��� �ּڰ��� �ִ� ������ ���� ���� nNum�� ����
{
    unsigned int nNum = 0;
    while (1)
    {
        nNum = rand();
        if ((nNum >= nMin) && (nNum <= nMax)) 
            break;
    }
    return nNum; //nNum�� ����� ���� ��ȯ
}

unsigned int nSquNumSum(unsigned int num, unsigned int res) //������ ������ ��
{
    return res + pow(num, 2);
}

double dAvg(unsigned int num) // ������ ���� ���
{
    return num / INTEGERS;
}

double dSquDevSum(unsigned int squsum, unsigned int sum, double avg) //������ ������ ��
{
    return squsum - (2 * sum * avg) - pow(avg, 3);
}

double dVar(unsigned int num) //�л�
{
    return num / INTEGERS;
}

double dStdDev(double num) //ǥ������
{
    return sqrt(num); //�������� ����ϱ� ���� math.h�� �Լ�
}

int main(void)
{
    GenRandSeed(); //���� �Լ� ȣ��

    int Min = 0; //���� ����
    int Max = 0;
    int Num = 0;
    int Sum = 0;
    int SquSum = 0;
    double Avg = 0.0;
    double ResSquDevSum = 0.0;
    double ResVar = 0.0;
    double ResStdDev = 0.0;

    printf("Input the range of number : (minimum, maximum)\n");
    scanf_s("%d %d", &Min, &Max); // �ּڰ��� �ִ��� �Է¹���

    for (int i = 0; i < INTEGERS; i++) //INTEGERS�� ���ǵ� �������ŭ �ݺ�
    {
        Num = GenRandInt(Min, Max); //Num�� ���� ����
        Sum += Num; //�ݺ����� ���� �� ������ ������ �����
        SquSum = nSquNumSum(Num, SquSum); // ������ ������ ��
    }
    printf("\n");
    Avg = dAvg(Sum); //���
    ResSquDevSum = dSquDevSum(SquSum, Sum, Avg); //������ ������ ��
    ResVar = dVar(ResSquDevSum); // �л�
    ResStdDev = dStdDev(ResVar); // ǥ������

    printf("Result (Sum, Variation, Standard variation) : %d, %.2lf, %.2lf", Sum, ResVar, ResStdDev); //��, �л�, ǥ������ ���

    return 0;
}