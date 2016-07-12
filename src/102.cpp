#include <cstdio>

int main()
{
	unsigned int in[9];

	while(scanf_s("%d %d %d %d %d %d %d %d %d", 
		&in[0], &in[1], &in[2], &in[3], &in[4], &in[5], &in[6], &in[7], &in[8]) != EOF)
	{
		unsigned int outcome[6];

		for (int i = 0; i < 6; i++)
		{
			unsigned int moves = 0;

			switch (i)
			{
			case 4: // GBC
				moves += in[4];
				moves += in[7];

				moves += in[0];
				moves += in[6];

				moves += in[2];
				moves += in[5];

				outcome[i] = moves;
				break;

			case 5: // GCB
				moves += in[4];
				moves += in[7];

				moves += in[2];
				moves += in[8];

				moves += in[0];
				moves += in[3];

				outcome[i] = moves;
				break;


			case 0: // BCG
				moves += in[3];
				moves += in[6];

				moves += in[2];
				moves += in[8];

				moves += in[1];
				moves += in[4];

				outcome[i] = moves;
				break;

			case 1: // BGC
				moves += in[3];
				moves += in[6];

				moves += in[1];
				moves += in[7];

				moves += in[2];
				moves += in[5];

				outcome[i] = moves;
				break;

			case 2: // CBG
				moves += in[5];
				moves += in[8];

				moves += in[0];
				moves += in[6];

				moves += in[1];
				moves += in[4];

				outcome[i] = moves;
				break;

			case 3: // CGB
				moves += in[5];
				moves += in[8];

				moves += in[1];
				moves += in[7];

				moves += in[0];
				moves += in[3];

				outcome[i] = moves;
				break;
			}
		}

		unsigned int min = 1000;
		unsigned int i_min = 1000;
		for (int i = 0; i < 6; i++)
		{
			if (outcome[i] < min)
			{
				min = outcome[i];
				i_min = i;
			}
			if (outcome[i] == min)
			{
				if (i < i_min)
				{
					min = outcome[i];
					i_min = i;
				}
			}
		}

		switch (i_min)
		{
		case 4:
			printf("GBC");
			break;
		case 5:
			printf("GCB");
			break;
		case 0:
			printf("BCG");
			break;
		case 1:
			printf("BGC");
			break;
		case 2:
			printf("CBG");
			break;
		case 3:
			printf("CGB");
			break;
		}

		printf(" %d\n", min);
	}

	return 0;
}