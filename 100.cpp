#include <cstdio>

int main()
{
	unsigned int i, j;
	
	while (scanf("%d %d", &i, &j) != EOF)
	{
		unsigned int a, b;
		unsigned int n = 0;
		unsigned int max = 0;

		if (i < j)
		{
			a = i;
			b = j;
		}
		else
		{
			a = j;
			b = i;
		}

		for (unsigned int it = a; it <= b; it++)
		{
			n = it;

			unsigned int cycle = 1;
			while (n != 1)
			{
				if (n % 2 == 0)
				{
					n = n/2;
					cycle++;
				}
				else
				{
					n = (3*n +1) /2;
					cycle += 2;
				}
			}

			if (cycle > max)
				max = cycle;
		}

		printf("%d %d %d\n", i, j, max);
	}
	return 0;
}
