#include <cstdio>

int main()
{
	long long a = 0, b = 0;

	while (scanf("%lld %lld", &a, &b) != EOF)
	{
		if (a < b)
			printf("%lld\n", b - a);
		else
			printf("%lld\n", a - b);
	}

	return 0;
}