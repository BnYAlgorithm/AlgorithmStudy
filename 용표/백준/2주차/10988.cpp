#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string tmp = s;
	reverse(s.begin(), s.end());

	if (s == tmp)
		cout << 1;
	else
		cout << 0;
}