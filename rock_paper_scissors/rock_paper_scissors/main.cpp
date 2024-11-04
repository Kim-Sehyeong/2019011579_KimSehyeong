#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define rock_paper_scissors 3
#define rock 0
#define paper 1
#define scissors 2
#define initstatus 0
#define end_cond 999

#define player_win 11
#define player_lose 12
#define draw 13


void GenRandSeed()
{
	srand((unsigned int)(time(NULL)));
	return;
}

unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

unsigned int CalcRpsGameRes(unsigned int nPlayerRps, unsigned int nComRps)
{
	if (nPlayerRps == nComRps)
	{
		return draw;
	}

	if ((nPlayerRps == rock) && (nComRps == scissors))
	{
		return player_win;
	}
	else if ((nPlayerRps == scissors) && (nComRps == rock))
	{
		return player_lose;
	}
	else
	{
		if (nPlayerRps < nComRps)
		{
			return player_lose;
		}
		else
		{
			return player_win;
		}
	}

}

int main(void)
{
	int nRange = 0;
	unsigned int nComRps = initstatus;
	unsigned int nPlayerRps = initstatus;

	while (1)
	{
		printf("Input (rock:0, paper:1, scissors:2)\n");
		printf("If you want to end the loop, please input 999\n");
		scanf_s("%d", &nPlayerRps);

		if (nPlayerRps == end_cond)
		{
			printf("End of the infinite while loop RPS game...\n");
			break;
		}
		else if ((nPlayerRps < 0) || (nPlayerRps >= rock_paper_scissors))
		{
			printf("Check your input condition...\n\n");
			continue;
		}


		printf("(Player, Computer):(%d, %d)\n\n", nPlayerRps, nComRps);
	}
	unsigned int nComRps = GenRandNum(rock_paper_scissors);
	unsigned int nGameRpsRes = CalcRpsGameRes(nPlayerRps, nComRps);


	switch (nGameRpsRes)
	{
	case player_win:
	{
		printf("Player win!\n\n");
		break;
	}

	case player_lose:
	{
		printf("Player lose...\n\n");
		break;
	}
		
	case draw:
	{
		printf("Draw!\n\n");
		break;
	}
	}

	return 0;
}