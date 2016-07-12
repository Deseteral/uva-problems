#include <cstdio>

int main()
{
	unsigned int n = 0;
	unsigned int m = 0;

	unsigned int field_id = 0;

	while (scanf("%d %d", &n, &m) != EOF)
	{
		if (n == 0 || m == 0)
			continue;

		if (field_id != 0)
			printf("\n\n");

		field_id++;

		char field[n][m];

		for (unsigned int y = 0; y < n; y++)
			scanf("%s", field[y]);

		for (unsigned int y = 0; y < n; y++)
		{
			for (unsigned int x = 0; x < m; x++)
			{
				if (field[y][x] == '*')
					continue;

				unsigned int mc = 0;

				// up
				if (y >= 1)
				{
					if (x >= 1)
					if (field[y-1][x-1] == '*')
						mc++;

					if (field[y-1][x] == '*')
						mc++;

					if (x+1 <= m)
					if (field[y-1][x+1] == '*')
						mc++;
				}

				// mid
				if (x >= 1)
				if (field[y][x-1] == '*')
					mc++;

				if (x+1 <= m)
				if (field[y][x+1] == '*')
					mc++;

				// down
				if (y+1 <= n)
				{
					if (x >= 1)
					if (field[y+1][x-1] == '*')
						mc++;

					if (field[y+1][x] == '*')
						mc++;

					if (x+1 <= m)
					if (field[y+1][x+1] == '*')
						mc++;
				}

				field[y][x] = (char)('0' + mc);
				// printf("cc %s %d\n", (char)('0' + mc), (int)('0' + mc));
			}
		}

		printf("Field #%d:\n", field_id);
		for (unsigned int y = 0; y < n; y++)
		{
			for (unsigned int x = 0; x < m; x++)
				printf("%c", field[y][x]);

			if (y != n-1)
				printf("\n");
		}
	}

	return 0;
}