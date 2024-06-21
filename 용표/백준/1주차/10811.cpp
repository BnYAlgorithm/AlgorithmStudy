#include <iostream>
#include <vector>
#include <algorithm>	

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
		i--;
		reverse(arr.begin() + i, arr.begin() + j);
		
	}

	for (int num : arr)
		cout << num << " ";
}