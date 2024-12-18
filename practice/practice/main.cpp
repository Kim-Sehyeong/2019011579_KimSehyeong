#include <stdio.h>

int main(void)
{
	FILE* fp;

	fopen_s(&fp, "test.txt", "r");
	if (fp == NULL)
	{
		printf("cannot open file...\n");
		return 1;
	}
	printf("file is open.\n");
	fclose(fp);
	return 0;
}