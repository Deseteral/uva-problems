#include <cstdio>

int main()
{
	unsigned int t = 0;

	while (scanf("%d", &t) != EOF)
	{
		for (unsigned int i = 0; i < t; i++)
		{
			int a = 0;
			int b = 0;

			scanf("%d %d", &a, &b);

			if (a == b)
				printf("%s\n", "=");
			else if (a > b)
				printf("%s\n", ">");
			else if (a < b)
				printf("%s\n", "<");
		}
	}

	return 0;
}