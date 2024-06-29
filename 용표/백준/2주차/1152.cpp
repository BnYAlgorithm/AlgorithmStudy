#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int result = 0;
	if (s.length() == 1 && s[0] == ' ')
		cout << 0;
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ' && (i != 0 && i != s.length() - 1))
				result++;
		}
		cout << ++result;
	}
} 