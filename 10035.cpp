#include <cstdio>

int main()
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a == 0 && b == 0)
			continue;

		unsigned int digits = 0;
		unsigned int carry = 0;

		if (a > b)
		{
			unsigned int aa = a;
			while (aa != 0)
			{
				aa /= 10;
				digits++;
			}
		}
		else
		{
			unsigned int bb = b;
			while (bb != 0)
			{
				bb /= 10;
				digits++;
			}
		}

		unsigned int mul = 1;
		for (unsigned int i = 0; i < digits; i++)
		{
			mul *= 10;

			unsigned int am = a % mul;
			unsigned int bm = b % mul;

			//printf("%d\n", (am + bm) / (mul / 10));

			if ((am + bm) / (mul / 10) >= 10)
				carry++;
		}

		if (carry == 0)
			printf("No carry operation.\n");
		else if (carry == 1)
			printf("%d carry operation.\n", carry);
		else
			printf("%d carry operations.\n", carry);
	}

	return 0;
}