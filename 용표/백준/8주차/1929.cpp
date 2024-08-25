#include <iostream>

using namespace std;

bool isPrime(int num)
{
	if (num == 2 || num == 3)
		return true;
	if (num == 1 || num % 2 == 0 || num % 3 == 0)
		return false;
	for (int i = 5; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (isPrime(i))
			cout << i << "\n";
	}
}