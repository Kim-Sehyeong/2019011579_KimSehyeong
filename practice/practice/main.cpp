#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;
	
	switch (rank)
	{
	case 1:
		m = 100;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 300;
		break;
	default:
		m = 0;
		break;
	}
	printf("m = %d", m);
	return 0;
}