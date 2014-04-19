#include <cstdio>

int main()
{
	unsigned int n = 0;
	
	while (scanf("%d", &n) != EOF)
	{
		for (unsigned int i = 0; i < n; i++)
		{
			unsigned int f = 0;
			unsigned int sum = 0;
			scanf("%d", &f);

			for (unsigned int j = 0; j < f; j++)
			{
				unsigned int size = 0;
				unsigned int animals = 0;
				unsigned int eco = 0;

				scanf("%d %d %d", &size, &animals, &eco);
				sum += size * eco;
			}

			printf("%d\n", sum);
		}
	}
	return 0;
}
