#include <stdio.h>

int main(void)
{
	int payment, price, change, change_1, change_2, change_3 = 0;
	printf("Input your payment and price of goods\n");
	scanf_s("%d %d", &payment, &price);
	change = payment - price;
	change_1 = change / 1000;
	change_2 = (change % 1000) / 500;
	change_3 = (change - 1000 * change_1 - 500 * change_2) / 100;
	printf("Here's your change, KRW %d (1000 x %d, 500 x %d, 100 x %d)", change, change_1, change_2, change_3);
	return 0;
}