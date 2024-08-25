#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<string> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int res = 0;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < M; i++)
	{
		string tmp;
		cin >> tmp;
		if (binary_search(arr.begin(), arr.end(), tmp))
			res++;
	}
	cout << res;
}