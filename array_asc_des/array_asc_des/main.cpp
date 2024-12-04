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
void AscSortRealArray(double* dArr, int nArrSize)
{
    double temp = 0.0;
    for (int i = 1; i < nArrSize; i++)
    {
        for (int j = 0; j < nArrSize - 1; j++)
        {
            if (dArr[i] < dArr[j])
            {
                temp = dArr[j];
                dArr[j] = dArr[i];
                dArr[i] = temp;
            }
        }
    }
}
void AscSortIntArray(int* nArr, int nArrSize)
{
    int temp = 0;
    for (int i = 1; i < nArrSize; i++)
    {
        for (int j = 0; j < nArrSize - 1; j++)
        {
            if (nArr[i] < nArr[j])
            {
                temp = nArr[j];
                nArr[j] = nArr[i];
                nArr[i] = temp;
            }
        }
    }
}
void DesSortRealArray(double* dArr, int nArrSize)
{
    double temp = 0.0;
    for (int i = 1; i < nArrSize; i++)
    {
        for (int j = 0; j < nArrSize - 1; j++)
        {
            if (dArr[i] > dArr[j])
            {
                temp = dArr[j];
                dArr[j] = dArr[i];
                dArr[i] = temp;
            }
        }
    }
}
void DesSortIntArray(int* nArr, int nArrSize)
{
    int temp = 0;
    for (int i = 1; i < nArrSize; i++)
    {
        for (int j = 0; j < nArrSize - 1; j++)
        {
            if (nArr[i] > nArr[j])
            {
                temp = nArr[j];
                nArr[j] = nArr[i];
                nArr[i] = temp;
            }
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

    double dArr[10] = {};
    double* pDArr = dArr;
    int nArr[10] = {};
    int* pNArr = nArr;
    int num = 0;
    const int min = -100;
    const int max = 100;

    printf("Integer or real number : (0, 1)\n");
    scanf_s("%d", &num);

    if (num == 0)
    {
        GenRandSeedInt();

        for (int i = 0; i < 10; i++)
        {
            *(nArr + i) = GenRandInt(min, max);
        }
        printf("Random integer array : ");
        PrintIntArr(nArr, 10);
        AscSortIntArray(nArr, 10);
        printf("Ascending integer array : ");
        PrintIntArr(nArr, 10);
        DesSortIntArray(nArr, 10);
        printf("Descending integer array : ");
        PrintIntArr(nArr, 10);

    }
    else if (num == 1)
    {
        GenRandSeedReal();

        for (int i = 0; i < 10; i++)
        {
            *(dArr + i) = GenRandReal(min, max);
        }
        printf("Random real number array : ");
        PrintRealArr(dArr, 10);
        AscSortRealArray(dArr, 10);
        printf("Ascending real number array : ");
        PrintRealArr(dArr, 10);
        DesSortRealArray(dArr, 10);
        printf("Descending real number array : ");
        PrintRealArr(dArr, 10);

    }
    else
    {
        printf("Check yout input\n");
    }



    return 0;
}