#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 0;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		string tmp = "";
		for (int j = 0; j < s.length(); j++)
		{
			if (tmp.find(s[j]) != string::npos)
				if (tmp.back() != s[j])
					break;
			tmp += s[j];
			if (j == s.length() - 1)
				count++;
		}
	}
	cout << count;
}