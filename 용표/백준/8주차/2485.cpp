#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	int N;
	cin >> N;

	vector<int> arr_diff;
	vector<int> arr_num(N);
	for (int i = 0; i < N; i++)
		cin >> arr_num[i];

	for (int i = 0; i < N - 1; i++)
		arr_diff.push_back(arr_num[i + 1] - arr_num[i]);

	int min = arr_diff[0];
	for (int i = 1; i < arr_diff.size(); i++)
		min = gcd(min, arr_diff[i]);

	int res = 0;
	for (int i = 0; i < arr_diff.size(); i++)
		res += (arr_diff[i] / min) - 1;
		
	cout << res;
}