#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	for (char i = 'a'; i <= 'z'; i++)
	{
		if (s.find(i) != string::npos)
			cout << s.find(i) << " ";
		else
			cout << "-1 ";
	}
}