#include <stdio.h>

int main(void)
{
	char arr[25];
	int cnt = 0;
	for (int i = 0; i < 25; i++)
	{
		scanf_s("%c", &arr[i]);
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			arr[i] += ('a' - 'A');
		}
		cnt++;
	}
	for (int i = 0; i < 25; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}