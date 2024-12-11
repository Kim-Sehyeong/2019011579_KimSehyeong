#include <stdio.h>
#include <string.h>

void reverse(char* start, char* end)
{
	char temp;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main(void)
{
	char input[100];
	char *start, *end;
	printf("Input a string: ");
	fgets(input, sizeof(input), stdin);
	
	printf("Original string: \"%s\"\n", input);
	input[strcspn(input, "\n")] = '\0';

	start = input;
	while (*start)
	{
		while (*start == ' ')
		{
			start++;
		}
		if (*start == '\0')
		{
			break;
		}


		end = start;
		while (*end && *end != ' ')
		{
			end++;
		}

		reverse(start, end - 1);

		start = end;
	}
	printf("Reversed word: \"%s\"\n", input);

	return 0;
}