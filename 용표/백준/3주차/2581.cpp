#include <iostream>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min = 0;
	for (int i = M; i <= N; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (j == i)
			{
				sum += i;
				if (min == 0)
					min = i;
			}
			if (i % j == 0) break;
		}
	}
	if (sum == 0)
		cout << -1;
	else
	{
		cout << sum << "\n";
		cout << min;
	}
}