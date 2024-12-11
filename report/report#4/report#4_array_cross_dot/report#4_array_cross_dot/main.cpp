#include <stdio.h>

void cross_product(int* arr_1, int* arr_2, int* arr_cross_res)
{
	*(arr_cross_res) = (*(arr_1 + 1)) * (*(arr_2 + 2)) - (*(arr_1 + 2)) * (*(arr_2 + 1));
	*(arr_cross_res + 1) = (*(arr_1 + 2)) * (*(arr_2)) - (*(arr_1)) * (*(arr_2 + 2));
	*(arr_cross_res + 2) = (*(arr_1)) * (*(arr_2 + 1)) - (*(arr_1 + 1)) * (*(arr_2));
}

int dot_product(int* arr_1, int* arr_2)
{
	return ((*(arr_1)) * (*(arr_2))) + ((*(arr_1 + 1)) * (*(arr_2 + 1))) + ((*(arr_1 + 2)) * (*(arr_2 + 2)));
}

int main(void)
{
	int arr_1[3] = { 2, 6, 7 };
	int arr_2[3] = { 3, 9, 2 };
	int arr_cross_res[3] = { };
	int dot_res = 0;

	printf("arr_1 : (%d, %d, %d), arr_2 : (%d, %d, %d)\n", *(arr_1), *(arr_1 + 1), *(arr_1 + 2), *(arr_2), *(arr_2 + 1), *(arr_2 + 2));
	
	cross_product(arr_1, arr_2, arr_cross_res);
	dot_res = dot_product(arr_1, arr_2);

	printf("cross product : (%d, %d, %d), dot product : %d\n", *(arr_cross_res), *(arr_cross_res + 1), *(arr_cross_res + 2), dot_res);

	return 0;
}