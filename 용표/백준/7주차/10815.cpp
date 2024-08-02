#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int M;
	cin >> M;

	vector<int> arr2(M);
	for (int i = 0; i < M; i++)
		cin >> arr2[i];

	sort(arr.begin(), arr.end());
	for (int num : arr2)
	{
		if (binary_search(arr.begin(), arr.end(), num))
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
}