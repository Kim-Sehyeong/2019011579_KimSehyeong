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
    int temp = 0;
    for (int i = 0; i < nArrSize - 1; i++)
    {
        for (int j = 0; j < nArrSize - 1 - i; i++)
        {
            if (dArr[j] > dArr[j + 1])
            {
                temp = dArr[j];
                dArr[j] = dArr[j + 1];
                dArr[j + 1] = temp;
            }
        }
    }
}
void AscSortIntArray(int* nArr, int nArrSize)
{
    int temp = 0;
    for (int i = 0; i < nArrSize - 1; i++)
    {
        for (int j = 0; j < nArrSize - 1 - i; i++)
        {
            if (nArr[j] > nArr[j + 1])
            {
                temp = nArr[j];
                nArr[j] = nArr[j + 1];
                nArr[j + 1] = temp;
            }
        }
    }
}
void DesSortRealArray(double* dArr, int nArrSize)
{
    int temp = 0;
    for (int i = 0; i < nArrSize - 1; i++)
    {
        for (int j = 0; j < nArrSize - 1 - i; i++)
        {
            if (dArr[j] > dArr[j + 1])
            {
                temp = dArr[j];
                dArr[j] = dArr[j + 1];
                dArr[j + 1] = temp;
            }
        }
    }
}
void DesSortIntArray(int* nArr, int nArrSize)
{
    int temp = 0;
    for (int i = 0; i < nArrSize - 1; i++)
    {
        for (int j = 0; j < nArrSize - 1 - i; i++)
        {
            if (nArr[j] > nArr[j + 1])
            {
                temp = nArr[j];
                nArr[j] = nArr[j + 1];
                nArr[j + 1] = temp;
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
        AscSortIntArray(nArr, nArrSize);
        printf("Ascending integer array : ");
        PrintIntArr(nArr, nArrSize);
        DesSortIntArray(nArr, nArrSize);
        printf("Descending integer array : ");
        PrintIntArr(nArr, nArrSize);

    } 
    else if (num == 1)
    {
        printf("Random real number array : ");
        for (int i = 0; i < nArrSize; i++)
        {
            *(dArr + i) = GenRandReal(min, max);
            printf("%.2lf     ", *(dArr + i));
        }
        printf("Random real number array : ");
        PrintRealArr(dArr, nArrSize);
        AscSortRealArray(dArr, nArrSize);
        printf("Ascending real number array : ");
        PrintRealArr(dArr, nArrSize);
        DesSortRealArray(dArr, nArrSize);
        printf("Descending real number array : ");
        PrintRealArr(dArr, nArrSize);

    }
    else
    {
        printf("Check yout input\n");
    }



	return 0;
}