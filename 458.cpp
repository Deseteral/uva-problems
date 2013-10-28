#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in;
	while (getline(cin, in))
	{
		for (int i = 0; i < in.length(); i++)
		{
			cout << (char)((int)in[i] - 7);
		}
		cout << endl;
	}

	return 0;
}