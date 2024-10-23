#include <stdio.h>

int main(void)
{
	int num_1, num_2, result = 0;
	char type;
	printf("Input two numbers and type of operation : (num1, type, num2)");
	scanf_s("%d %c %d", &num_1, &type, sizeof(type), &num_2);

	if (type == '+')
	{
		result = num_1 + num_2;
	}
	else if (type == '-')
	{
		result = num_1 - num_2;
	}  
	else if (type == '*')
	{
		result = num_1 * num_2;
	}
	else if(type == '/')
	{
		result = num_1 / num_2;
	
	}
	printf("%d", result);z

	
	return 0;
}