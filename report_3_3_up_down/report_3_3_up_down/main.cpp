#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHANCE 10

void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandInt(void)
{
    unsigned int nNum = 0;
    nNum = rand();
    return nNum;
}

int main(void)
{
    GenRandSeed();

    int num = 0;
    int nRanNum = 0;
    nRanNum = GenRandInt();

    for (int i = 0; i < CHANCE; i++)
    {
        printf("Input a number.\n");
        scanf_s("%d", &num);
        if (i < CHANCE - 1)
        {
            if (num == nRanNum)
            {
                printf("Correct!\n");
                break;
            }
            else if (num > nRanNum)
            {
                printf("Down. [chance : %d / %d]\n", CHANCE - (i + 1), CHANCE);
            }
            else
            {
                printf("Up. [chance : %d / %d]\n", CHANCE - (i + 1), CHANCE);
            }
        }
        else
        {
            if (num == nRanNum)
            {
                printf("Correct!\n");
            }
            else
            {
                printf("The end... The answer is %d\n", nRanNum);
            }
        }
    }
    return 0;
}