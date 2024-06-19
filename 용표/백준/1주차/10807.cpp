#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<int> arr;

	cin >> N;
	arr.resize(N);

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int v;
	int count = 0;

	cin >> v;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == v)
			count++;
	}
	cout << count;
}