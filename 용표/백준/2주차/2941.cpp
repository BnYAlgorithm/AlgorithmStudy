#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string croatia[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string s;
	cin >> s;

	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			int index = s.find(croatia[i]);
			if (index == string::npos) break;
			s.replace(index, croatia[i].length(), "a");
		}
	}
	cout << s.length();
}