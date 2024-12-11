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

unsigned int GenRandInt(unsigned int nMin, unsigned int nMax) //난수를 생성해서 사용자가 입력한 최솟값과 최댓값 사이의 값만 변수 nNum에 저장
{
    unsigned int nNum = 0;
    while (1)
    {
        nNum = rand();
        if ((nNum >= nMin) && (nNum <= nMax))
            break;
    }
    return nNum; //nNum에 저장된 값을 반환
}

int sum(int* p_arr, int arr_size)
{
    int res = 0;

    for (int i = 0; i < arr_size; i++)
    {
        res += *(p_arr + i);
    }
    return res;
}

void dev(int* p_arr, int avg, int arr_size, int* p_arr_dev)
{
    for (int i = 0; i < arr_size; i++)
    {
        *(p_arr_dev + i) = *(p_arr + i) - avg;
    }
}

int var(int avg, int arr_size, int* p_arr_dev)
{
    int res = 0;
    for (int i = 0; i < arr_size; i++)
    {
        res += (*(p_arr_dev + i)) * (*(p_arr_dev + i));
    }
    return res / arr_size;
}

int std_dev(int var)
{
    return sqrt(var);
}


int main(void)
{
    GenRandSeed(); //난수 함수 호출

    int arr[10] = { };
    int arr_dev[10] = { };
    int* p_arr = arr;
    int* p_arr_dev = arr_dev;
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int sum_res, avg, var_res, std_dev_res = 0;

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = GenRandInt(MIN, MAX);
    }
    sum_res = sum(p_arr, arr_size);
    avg = sum_res / arr_size;
    dev(p_arr, avg, arr_size, p_arr_dev);
    var_res = var(avg, arr_size, p_arr_dev);
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
