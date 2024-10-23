#include <stdio.h>

int main(void)
{
	int num_1, num_2, num_b, num_s, remain, maxcomdiv, leacommul, quo_1, quo_2 = 0;
	printf("Input two numbers : ");
	scanf_s("%d %d", &num_1, &num_2);

	if (num_1 > num_2) //큰 수 작은 수 분류
	{
		num_b = num_1;
		num_s = num_2;
	}
	else
	{
		num_b = num_2;
		num_s = num_1;
	}

	//최대공약수 구하는 과정
	do { 
		remain = num_b % num_s; //큰 수를 작은 수로 나눈 후 나머지를 구함
		num_b = num_s;
		num_s = remain;
	} while (num_s != 0);

	maxcomdiv = num_b; //최대공약수
	quo_1 = num_1 / maxcomdiv; //서로소1
	quo_2 = num_2 / maxcomdiv; //서로소2
	leacommul = maxcomdiv * quo_1 * quo_2; // 최소공배수 = 최대공약수 * 두 수의 서로소

	printf("The maximum common divisor of two numbers : %d\n", maxcomdiv);
	printf("The minimum common multiple of two numbers : %d\n", leacommul);


	return 0;
}