#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GenRandSeedInt()
{
    srand((unsigned int)(time(NULL)));
    return;
}
void GenRandSeedReal()
{
    srand((double)(time(NULL)));
    return;
}
double GenRandReal(int min, int max)
{
    return min + (double)rand() / RAND_MAX * (max - min);
}
int GenRandInt(int min, int max)
{
    int nNum = 0;
    while (1)
    {
        nNum = rand();
        if ((nNum >= min) && (nNum <= max))
            break;
    }
    return nNum;
}
void CalcInvRealArr(double* dArr, int nArrSize)
{
    double temp = 0.0;
    int j = 0;
    for (int i = 0; i < nArrSize / 2; i++)
    {
        j = nArrSize - i - 1;
        if (i < j)
        {
            temp = dArr[i];
            dArr[i] = dArr[j];
            dArr[j] = temp;
        }
    }
}
void CalcInvIntArr(int* nArr, int nArrSize)
{
    int temp = 0;
    int j = 0;
    for (int i = 0; i < nArrSize / 2; i++)
    {
        j = nArrSize - i - 1;
        if (i < j)
        {
            temp = nArr[i];
            nArr[i] = nArr[j];
            nArr[j] = temp;
        }
    }
}

void PrintIntArr(int* nArr, int nArrSize)
{
    for (int i = 0; i < nArrSize; i++)
    {
        printf("%5d", *(nArr + i));
    }
    printf("\n");
}
void PrintRealArr(double* dArr, int nArrSize)
{
    for (int i = 0; i < nArrSize; i++)
    {
        printf("%.2lf     ", *(dArr + i));
    }
    printf("\n");
}



int main(void)
{
    GenRandSeedInt();
    GenRandSeedReal();

    double dArr[10] = {};
    double* pDArr = dArr;
    int nArr[5] = {};
    int* pNArr = nArr;
    int num = 0;
    const int nArrSize = sizeof(dArr) / sizeof(dArr[0]);
    const int min = -100;
    const int max = 100;

    printf("Integer or real number : (0, 1)\n");
    scanf_s("%d", &num);

    if (num == 0)
    {
        for (int i = 0; i < nArrSize; i++)
        {
            *(nArr + i) = GenRandInt(min, max);
        }
        printf("Random integer array : ");
        PrintIntArr(nArr, nArrSize);
        CalcInvIntArr(nArr, nArrSize);
        printf("Invert integer array : ");
        PrintIntArr(nArr, nArrSize);

    }
    else if (num == 1)
    {
        for (int i = 0; i < nArrSize; i++)
        {
            *(dArr + i) = GenRandReal(min, max);
        }
        printf("Random real number array : ");
        PrintRealArr(dArr, nArrSize);
        CalcInvRealArr(dArr, nArrSize);
        printf("Invert real array : ");
        PrintRealArr(dArr, nArrSize);

    }
    else
    {
        printf("Check yout input\n");
    }



    return 0;
}