#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	
	while (scanf("%d", &n) != EOF)
	{
		int ar[n];
		int di[n-1];
		int jo = n-1;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &ar[i]);
		}
		
		for (int i = 0; i < n-1; i++)
		{
			di[i] = abs(ar[i] - ar[i+1]);
		}

		bool found = false;
		for (int i = 0; i < n-1; i++)
		{
			if (di[i] == jo)
			{
				jo--;
				found = true;
			}
		}

		if (found)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
	return 0;
}