#include <stdio.h>

void SetArray(double* pDArr, int nArrSize)
{
    printf("Input : size(%d) array\n", nArrSize);
    for (unsigned int i = 0; i < nArrSize; i++)
    {
        scanf_s("%lf", pDArr + i);
    }
}

void PrintArray(double* pDArr, int nArrSize)
{

    printf("\n");
    printf("using pointer..\n");
    for (unsigned int i = 0; i < nArrSize; i++)
    {
        printf("[%d](%u, %.4lf)\n", i, pDArr + i, *(pDArr + i));
    }
}

double CalcMaxValArray(double* pDArr, int nArrSize)
{
    double dRes = *(pDArr + 0);
    for (unsigned int i = 0; i < nArrSize; i++)
    {
        if (*(pDArr + i) > dRes)
            dRes = *(pDArr + i);
    }
    return dRes;
}

int main(void)
{
    double dArr[5] = {};
    double* pDArr = dArr;
    const int nArrSize = sizeof(dArr) / sizeof(dArr[0]);

    SetArray(dArr, nArrSize);
    PrintArray(dArr, nArrSize);

    printf("\n");
    printf("using array..\n");
    for (unsigned int i = 0; i < nArrSize; i++)
    {
        printf("[%d](%u, %.4lf)\n", i, &dArr[i], dArr[i]);
        //printf("[%d](%u, %.4lf)\n", i, dArr + i, *(dArr + i));
        //printf("[%d](%u, %.4lf)\n", i, &pDArr[i], pDArr[i]);
        //printf("[%d](%u, %.4lf)\n", i, pDArr + i, *(pDArr + i));
    }

    printf("[max](%.4lf)\n", CalcMaxValArray(dArr, nArrSize));


    return 0;
}