#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<pair<int, int>> arr;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		arr.push_back(make_pair(y, x));
	}

	sort(arr.begin(), arr.end());
	for (pair<int, int> num : arr)
		cout << num.second << " " << num.first << "\n";
}