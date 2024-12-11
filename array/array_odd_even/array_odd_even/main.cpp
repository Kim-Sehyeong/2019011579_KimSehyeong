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
void CalcEvenOddArr(int* nArr, int nArrSize)
{
    printf("Even number : ");
    for (int i = 0; i < nArrSize; i++)
    {
        if (*(nArr + i) % 2 == 0)
        {
            printf("%5d", *(nArr + i));
        }
    }
    printf("\n");
    printf("Odd number : ");
    for (int i = 0; i < nArrSize; i++)
    {
        if (*(nArr + i) % 2 != 0)
        {
            printf("%5d", *(nArr + i));
        }
    }
    printf("\n");


}
void PrintArr(int* nArr, int nArrSize)
{
    for (int i = 0; i < nArrSize; i++)
    {
        printf("%5d", *(nArr + i));
    }
    printf("\n");
}



int main(void)
{
    GenRandSeedInt();

    int nArr[10] = {};
    int* pNArr = nArr;
    int num = 0;
    const int nArrSize = sizeof(nArr) / sizeof(nArr[0]);
    const int min = 0;
    const int max = 100;

    for (int i = 0; i < nArrSize; i++)
    {
        *(nArr + i) = GenRandInt(min, max);
    }
    printf("Random integer array : ");
    PrintArr(nArr, nArrSize);
    printf("Invert integer array : ");
    CalcEvenOddArr(nArr, nArrSize);

    return 0;
}