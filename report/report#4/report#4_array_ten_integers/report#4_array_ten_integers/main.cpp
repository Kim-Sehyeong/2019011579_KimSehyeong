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

int sum(int* p_arr, int arr_size) // 배열 arr의 각 요소의 합을 구하는 함수
{
    int res = 0;

    for (int i = 0; i < arr_size; i++)
    {
        res += *(p_arr + i);
    }
    return res;
}

void dev(int* p_arr, double avg, int arr_size, double* p_arr_dev) // 배열 arr의 각 요소와 평균의 차를 구해 배열 arr_dev에 대입
{
    for (int i = 0; i < arr_size; i++)
    {
        *(p_arr_dev + i) = *(p_arr + i) - avg;
    }
}

double var(int arr_size, double* p_arr_dev) // 배열 arr_dev의 각 요소의 제곱을 모두 더해 배열 크기로 나눔
{
    double res = 0.0;
    for (int i = 0; i < arr_size; i++)
    {
        res += (*(p_arr_dev + i)) * (*(p_arr_dev + i));
    }
    return res / arr_size;
}

double std_dev(double var) //표준편차
{
    return sqrt(var);
}


int main(void)
{
    GenRandSeed(); //난수 함수 호출

    int arr[10] = { };
    double arr_dev[10] = { };
    int* p_arr = arr;
    double* p_arr_dev = arr_dev;
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int sum_res = 0;
    double avg, var_res, std_dev_res = 0.0;

    // 배열 arr의 각 요소로 난수를 대입
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = GenRandInt(MIN, MAX);
    }

    // 함수 호출
    sum_res = sum(p_arr, arr_size); // 합
    avg = sum_res / arr_size; // 평균
    dev(p_arr, avg, arr_size, p_arr_dev); // 편차
    var_res = var(arr_size, p_arr_dev); // 분산
    std_dev_res = std_dev(var_res); // 표준 편차

    // 난수로 구성된 배열 출력
    printf("Random array composed with %d integers : ", arr_size); 
    for (int i = 0; i < arr_size; i++)
    {
        printf("%3d", *(arr + i));
    }
    printf("\n");

    printf("sum, variable, standard deviation : (%d, %.2lf, %.2lf)", sum_res, var_res, std_dev_res);
    return 0;
}
