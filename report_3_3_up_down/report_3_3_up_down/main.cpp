#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    printf("(secret answer : %d)\n", nRanNum);

    for (int i = 0; i < 10; i++)
    {
        printf("Input a number.\n");
        scanf_s("%d", &num);
        if (i < 9)
        {
            if (num == nRanNum)
            {
                printf("Correct!\n");
                break;
            }
            else if (num > nRanNum) printf("Down\n");
            else if (num < nRanNum) printf("Up\n");
        }
        else
        {
            if (num == nRanNum)
            {
                printf("Correct!\n");
                break;
            }
            else
            {
                printf("The end... The answer is %d\n", nRanNum);
            }
        }
        
    }
    return 0;
}