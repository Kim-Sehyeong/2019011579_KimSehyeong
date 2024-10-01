#include <stdio.h>

int main(void)
{
	int payment, price, change, change_1, change_2, change_3 = 0; // 변수 초기화
	printf("Input your payment and price of goods\n");			  // 지불 금액과 물건 값을 입력하라는 문구를 출력
	scanf_s("%d %d", &payment, &price);							  // 지불 금액과 물건 값을 입력받는다.
	change = payment - price;									  // 전체 잔액을 계산
	change_1 = change / 1000;									  // 잔액에서 1000원이 몇 장이 필요한지 계산
	change_2 = (change % 1000) / 500;							  // 이후 남은 잔액에서 500원이 몇 개 필요한지 게산
	change_3 = (change - 1000 * change_1 - 500 * change_2) / 100; // 이후 남은 잔액에서 100원이 몇 개 필요한지 계산 
	printf("Here's your change, KRW %d (1000 x %d, 500 x %d, 100 x %d)", change, change_1, change_2, change_3);
	return 0;
}