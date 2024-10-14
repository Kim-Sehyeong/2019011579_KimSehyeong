#include <stdio.h>

int main(void)
{
	int num_1, num_2, add, subtract, multiply, divide = 0;
	char type;
	printf("Input two numbers and type of operation : (num1, num2, type)");
	scanf_s("%d %d %c", &num_1, &num_2, &type, sizeof(type));

	if (type == 'a')
	{
		int add = num_1 + num_2;
		printf("%d", add);
	}
	else if (type == 's')
	{
		int subtract = num_1 - num_2;
		printf("%d", subtract);
	}
	else if (type == 'm')
	{
		int multiply = num_1 * num_2;
		printf("%d", multiply);
	}
	else if(type == 'd')
	{
		int divide = num_1 / num_2;
		printf("%d", divide);
	}
	else
	{
		printf("You've Written Wrong type of operation");
	}
	return 0;
}