#include <stdio.h>

int main(void)
{
	int payment, price, change, change_1, change_2, change_3 = 0; // ���� �ʱ�ȭ
	printf("Input your payment and price of goods\n");			  // ���� �ݾװ� ���� ���� �Է��϶�� ������ ���
	scanf_s("%d %d", &payment, &price);							  // ���� �ݾװ� ���� ���� �Է¹޴´�.
	change = payment - price;									  // ��ü �ܾ��� ���
	change_1 = change / 1000;									  // �ܾ׿��� 1000���� �� ���� �ʿ����� ���
	change_2 = (change % 1000) / 500;							  // ���� ���� �ܾ׿��� 500���� �� �� �ʿ����� �Ի�
	change_3 = (change - 1000 * change_1 - 500 * change_2) / 100; // ���� ���� �ܾ׿��� 100���� �� �� �ʿ����� ��� 
	printf("Here's your change, KRW %d (1000 x %d, 500 x %d, 100 x %d)", change, change_1, change_2, change_3);
	return 0;
}