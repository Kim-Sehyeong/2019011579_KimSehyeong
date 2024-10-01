#include <stdio.h>

int main(void)
{
	int payment, price = 0;
	printf("Input your payment and price of goods\n");
	scanf_s("%d %d", &payment, &price);
	int change = payment - price;
	int change_1 = change / 1000;
	int change_2 = (change % 1000) / 500;
	int change_3 = (change - 1000 * change_1 - 500 * change_2) / 100;
	printf("Here's your change, KRW %d (1000 x %d, 500 x %d, 100 x %d)", change, change_1, change_2, change_3);
	return 0;
}