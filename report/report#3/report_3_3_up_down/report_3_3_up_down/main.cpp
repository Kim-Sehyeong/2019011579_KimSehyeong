#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHANCE 10 // �� ���� ��ȸ�� ������ ���� ��ũ�θ� ����

void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandInt(void) // ������ ��ȯ�ϴ� �Լ�
{
    unsigned int nNum = 0;
    nNum = rand();
    return nNum;
}

int main(void)
{
    GenRandSeed(); // ���� �Լ� ȣ��

    int num = 0; //���� ����
    int nRanNum = 0;
    nRanNum = GenRandInt(); // ���� nRanNum�� ���� ����

    for (int i = 0; i < CHANCE; i++) // ��ũ�θ� ���ǵ� �������ŭ �ݺ��� �ݺ�
    {
        printf("Input a number.\n");
        scanf_s("%d", &num); // ������� ���� �Է¹���
        if (i < CHANCE - 1) //��ȸ�� 2�� �̻� ������ ��
        {
            if (num == nRanNum) // ����
            {
                printf("Correct!\n");
                break;
            }
            else if (num > nRanNum) // ����
            {
                printf("Down. [chance : %d / %d]\n", CHANCE - (i + 1), CHANCE); // ���� ��ȸ�� �־��� ��ȸ�� ���
            }
            else
            {
                printf("Up. [chance : %d / %d]\n", CHANCE - (i + 1), CHANCE);
            }
        }
        else // ��ȸ�� 1�� ������ ��
        {
            if (num == nRanNum) // ����
            {
                printf("Correct!\n");
            }
            else // ����
            {
                printf("The end... The answer is %d\n", nRanNum);
            }
        }
    }
    return 0;
}