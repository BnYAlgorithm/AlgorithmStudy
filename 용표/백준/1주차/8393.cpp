#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int tmp = 0;

	for (int i = 1; i <= n; i++)
		tmp += i;

	cout << tmp;
}