#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	int sum = 0, max = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= M && max < sum)
					max = sum;
			}
		}
	}
	cout << max;
}