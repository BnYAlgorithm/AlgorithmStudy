#include <iostream>

using namespace std;

int main()
{
	long long N;
	cin >> N;

	int cnt = 0;
	for (long long i = 1; i * i <= N; i++)
		cnt++;

	cout << cnt;
}