#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MIN 0
#define MAX 100

void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandInt(unsigned int nMin, unsigned int nMax) //������ �����ؼ� ����ڰ� �Է��� �ּڰ��� �ִ� ������ ���� ���� nNum�� ����
{
    unsigned int nNum = 0;
    while (1)
    {
        nNum = rand();
        if ((nNum >= nMin) && (nNum <= nMax))
            break;
    }
    return nNum; //nNum�� ����� ���� ��ȯ
}

int sum(int* arr, int arr_size)
{
    int res = 0;

    for (int i = 0; i < arr_size; i++)
    {
        res += *(arr + i);
    }
    return res;
}

void dev(int* arr, int avg, int arr_size, int* arr_dev)
{
    for (int i = 0; i < arr_size; i++)
    {
        *(arr_dev + i) = *(arr + i) - avg;
    }
}

int var(int avg, int arr_size, int* arr_dev)
{
    int res = 0;
    for (int i = 0; i < arr_size; i++)
    {
        res += (*(arr_dev + i)) * (*(arr_dev + i));
    }
    return res / arr_size;
}

int std_dev(int var)
{
    return sqrt(var);
}


int main(void)
{
    GenRandSeed(); //���� �Լ� ȣ��

    int arr[10] = { };
    int arr_dev[10] = { };
    int* p_arr = arr;
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int sum_res, avg, var_res, std_dev_res = 0;

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = GenRandInt(MIN, MAX);
    }
    sum_res = sum(arr, arr_size);
    avg = sum_res / arr_size;
    dev(arr, avg, arr_size, arr_dev);
    var_res = var(avg, arr_size, arr_dev);
    std_dev_res = std_dev(var_res);

    printf("Random array composed with %d integers : ", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        printf("%3d", *(arr + i));
    }
    printf("\n");

    printf("sum, variable, standard deviation : (%d, %d, %d)", sum_res, var_res, std_dev_res);
    return 0;
}
