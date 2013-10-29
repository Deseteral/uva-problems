#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in;
	bool first = true;

	while (getline(cin, in))
	{
		for (int i = 0; i < in.length(); i++)
		{
			if (in[i] == '"')
			{
				if (first)
					cout << "``";
				else
					cout << "''";

				first = !first;
			}
			else
			{
				cout << in[i];
			}
		}
		cout << endl;
	}
	return 0;
}