#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define INTEGERS 10


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

    int nNum = 0;
    int nNumSum = 0;
    double dAvg = 0.0;
    double dDev = 0.0;
    double dVar = 0.0;
    double dStdev = 0.0;

    /*nNumSum += nNum;
    dAvg = nNumSum / 10;
    dDev = nNum - nNumSum;
    dVar = pow(dDev, 2) / 10;
    dStdev = sqrt(dVar);*/

    if ((nNum >= 0) && (nNum <= 5000))
    {

    }

    else
    {
        
    }

    for (unsigned int i = 0; i < INTEGERS; i++)
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