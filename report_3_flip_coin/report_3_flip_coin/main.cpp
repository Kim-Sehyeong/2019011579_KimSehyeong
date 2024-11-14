#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_FLIP 10000
#define COIN_FWD_BWD 3
#define COIN_FWD_STATUS 1
#define COIN_BWD_STATUS 2
#define COIN_NOT_VALID 0
#define INITSTATUS 100
#define END_COND 999


void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandFlipCoin(unsigned int nRange)
{
    unsigned int nRes = 0;
    while (1)
    {
        nRes = ((unsigned int)(rand()) % (nRange)); //nRange 는 COIN_FWD_BWD를 받고 있음. rand()로 무작위 수를 3으로 나누면 나머지는 0, 1, 2 중 하나
        if ((nRes == COIN_FWD_STATUS) || (nRes == COIN_BWD_STATUS)) //나머지가 1, 2일 때만 break
            break;
    }
    return nRes;
}


int main(void)
{
    GenRandSeed();

    int nNumSumFwdFlip = 0;
    int nNumSumBwdFlip = 0;
    double dVarFwdFlip = 0.0;
    double dVarBwdFlip = 0.0;
    double dStdevFwdFlip = 0.0;
    double dStdevBwdFlip = 0.0;


    for (unsigned int i = 0; i < NUM_FLIP; i++)
    {

        //0: fwd, 1: bwd
        unsigned int nStatusFlipCoin = GenRandFlipCoin(COIN_FWD_BWD);


        switch (nStatusFlipCoin)
        {
        case COIN_FWD_STATUS:
        {
            nNumSumFwdFlip++;
            break;
        }
        case COIN_BWD_STATUS:
        {
            nNumSumBwdFlip++;
            break;
        }
        default:
        {
            printf("Please check your loop again.\n");
            break;
        }
        }
    }

    printf("Summation result : (FWD, BWD) : (%d, %d)\n", nNumSumFwdFlip, nNumSumBwdFlip);
    printf("Probability : (FWD, BWD):(%.4lf, %.4lf)\n", (double)(nNumSumFwdFlip) / (NUM_FLIP), (double)(nNumSumBwdFlip) / (NUM_FLIP));

    return 0;
}   