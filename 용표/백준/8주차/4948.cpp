#include <iostream>

using namespace std;

bool isPrime(int num)
{
	if (num == 2 || num == 3)
		return true;
	if (num == 1 || num % 2 == 0 || num % 3 == 0)
		return false;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	while (true)
	{
		int n;
		cin >> n;

		if (n == 0) break;
		
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (isPrime(i))
				cnt++;
		}
		cout << cnt << "\n";
	}
}