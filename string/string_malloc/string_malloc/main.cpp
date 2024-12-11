#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 함수 정의
void calc(int* array, int ini_size, double* sum, double* avg, double* var, double* std_var)
{
	*sum = 0;
	*var = 0;

	for (int i = 0; i < ini_size; i++)
	{
		*sum += array[i];
	}
	*avg = *sum / ini_size;

	for (int i = 0; i < ini_size; i++)
	{
		*var += pow(array[i] - *avg, 2);
	}
	*var /= ini_size;
	*std_var = sqrt(*var);
}

int main(void)
{
	int ini_size, add_size = 0;
	int* array = NULL;
	double sum, avg, var, std_var = 0.0;

	// 초기 배열 크기 입력
	printf("Initial size of array: ");
	scanf_s("%d", &ini_size);

	// 메모리 동적 할당
	array = (int*)malloc(ini_size * sizeof(int));
	if (array == NULL)
	{
		printf("Fail to memory allocation.\n");
		return 1;
	}

	// 초기 배열 값 입력 받기
	printf("Input: ");
	for (int i = 0; i < ini_size; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 첫 번째 계산, 출력
	calc(array, ini_size, &sum, &avg, &var, &std_var);
	printf("합계: %.2lf\n", sum);
	printf("평균: %.2lf\n", avg);
	printf("분산: %.2lf\n", var);
	printf("표준편차: %.2lf\n", std_var);

	// 추가 배열 크기 입력
	printf("추가 배열 크기: ");
	scanf_s("%d", &add_size);

	// 메모리 재할당
	array = (int*)realloc(array, (ini_size + add_size) * sizeof(int));
	if (array == NULL)
	{
		printf("Fail to memory allocation.\n");
		return 1;
	}

	// 추가 배열 값 입력
	printf("추가된 값: ");
	for (int i = ini_size; i < ini_size + add_size; i++)
	{
		scanf_s("%d", &array[i]);
	}

	// 확장 배열 두 번째 계산, 출력
	calc(array, ini_size + add_size, &sum, &avg, &var, &std_var);
	printf("새로운 합계: %.2lf\n", sum);
	printf("새로운 평균: %.2lf\n", avg);
	printf("새로운 분산: %.2lf\n", var);
	printf("새로운 표준편차: %.2lf\n", std_var);

	free(array);

	return 0;
}