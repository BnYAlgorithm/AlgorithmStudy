#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int result = 0;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		for (int j = 2; j <= num; j++)
		{
			if (j == num) result++;
			if (num % j == 0) break;
		}
	}
	cout << result;
}