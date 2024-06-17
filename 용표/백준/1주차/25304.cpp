#include <iostream>

using namespace std;

int main()
{
	int X, N;
	int a, b;

	cin >> X;
	cin >> N;

	int tmp = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		tmp += a * b;
	}

	if (tmp == X)
		cout << "Yes";
	else
		cout << "No";
}