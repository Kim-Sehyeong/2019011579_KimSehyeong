#include <stdio.h>

int main(void)
{
	int num_1, num_2, result = 0;
	char type;

	printf("Input two numbers and type of operation : (num1, type, num2)\n");
	scanf_s("%d %c %d", &num_1, &type, sizeof(type), & num_2);


	switch (type)
	{
	case '+':
		result = num_1 + num_2;
		break;

	case '-':
		result = num_1 - num_2;
		break;

	case '*':
		result = num_1 * num_2;
		break;

	case '/':
		result = num_1 / num_2;
		break;

	default:
		result = 0;
		break;
	}

	printf("result = %d", result);
	return 0;
}