#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	vector<int> arr;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		arr.push_back(i);

	for (int n = 0; n < M; n++)
	{
		int i, j;
		cin >> i >> j;
		i--; j--;

		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	for (int num : arr)
		cout << num << " ";
}