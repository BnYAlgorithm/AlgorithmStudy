#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> arr;
	arr.resize(N);

	for (int n = 0; n < M; n++)
	{
		int i, j, k;

		cin >> i >> j >> k;
		for (; i <= j; i++)
			arr[i - 1] = k;
	}

	for (int i = 0; i < N - 1; i++)
		cout << arr[i] << " ";
	cout << arr[N - 1];
}