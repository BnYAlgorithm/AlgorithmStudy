#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
			cout << " ";
		for (int j = 0; j < i * 2 + 1; j++)
			cout << "*";
		cout << "\n";
	}
	for (int i = N - 2; i >= 0; i--)
	{
		for (int j = 0; j < N - i - 1; j++)
			cout << " ";
		for (int j = 0; j < i * 2 + 1; j++)
			cout << "*";
		if (i != 0)
			cout << "\n";
	}
}