#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> isPrime(int num) // 에라토스테네스의 체
{
    vector<int> primeNum(num + 1);
    for (int i = 2; i <= num; i++)
    {
        primeNum[i] = i;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (primeNum[i] == 0)
            continue;
        for (int j = i * i; j <= num; j += i)
            primeNum[j] = 0;
    }
	return primeNum;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		int cnt = 0;
		vector<int> primeNum = isPrime(N);
		for (int i = 2; i <= N / 2; i++)
		{
			if (primeNum[i] && primeNum[N - i])
				cnt++;
		}
		cout << cnt << "\n";
	}
}