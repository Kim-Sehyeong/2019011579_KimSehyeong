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

unsigned int GenRandInt(unsigned int nMin, unsigned int nMax)
{
    unsigned int nNum = 0;
    while (1)
    {
        nNum = rand();
        if ((nNum >= nMin) && (nNum <= nMax)) 
            break;
    }
    return nNum;
}

unsigned int nSquNumSum(unsigned int num, unsigned int res)
{
    return res + pow(num, 2);
}

double dAvg(unsigned int num)
{
    return num / INTEGERS;
}

double dSquDevSum(unsigned int squsum, unsigned int sum, double avg)
{
    return squsum - (2 * sum * avg) - pow(avg, 3);
}

double dVar(unsigned int num)
{
    return num / INTEGERS;
}

double dStdDev(double num)
{
    return sqrt(num);
}

int main(void)
{
    GenRandSeed();

    int Min = 0;
    int Max = 0;
    int Num = 0;
    int Sum = 0;
    int SquSum = 0;
    double Avg = 0.0;
    double ResSquDevSum = 0.0;
    double ResVar = 0.0;
    double ResStdDev = 0.0;

    printf("Input the range of number : (minimum, maximum)\n");
    scanf_s("%d %d", &Min, &Max);

    for (int i = 0; i < INTEGERS; i++)
    {
        Num = GenRandInt(Min, Max);
        Sum += Num;
        SquSum = nSquNumSum(Num, SquSum);
        printf("%d, ", Num);
    }
    printf("\n");
    Avg = dAvg(Sum);
    ResSquDevSum = dSquDevSum(SquSum, Sum, Avg);
    ResVar = dVar(ResSquDevSum);
    ResStdDev = dStdDev(ResVar);

    printf("Result (Sum, Variation, Standard variation) : %d, %.2lf, %.2lf", Sum, ResVar, ResStdDev);

    return 0;
}