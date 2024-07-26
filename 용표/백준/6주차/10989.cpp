#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[10001] = { 0 };
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int idx;
		cin >> idx;
		arr[idx]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		if (arr[i] > 0)
		{
			for (int j = 0; j < arr[i]; j++)
				cout << i << "\n";
		}
	}
}