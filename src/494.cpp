#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in;
	while (getline(cin, in))
	{
		bool word_started = false;
		unsigned int word_count = 0;

		for (int i = 0; i < in.length(); i++)
		{
			bool is_letter = false;

			if ((int)in[i] >= (int)'A' && (int)in[i] <= (int)'Z' ||
				(int)in[i] >= (int)'a' && (int)in[i] <= (int)'z')
			{
				is_letter = true;
			}

			if (!word_started)
			{
				if (is_letter)
				{
					word_started = true;
					word_count++;
				}
			}
			else
			{
				if (!is_letter)
					word_started = false;
			}
		}

		cout << word_count << endl;
	}
	return 0;
}