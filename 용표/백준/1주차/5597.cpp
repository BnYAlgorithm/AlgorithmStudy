#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	arr.resize(30, 0);

	for (int i = 0; i < 28; i++)
	{
		int n;
		cin >> n;
		arr[n - 1]++;
	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] != 1)
			cout << i + 1 << "\n";
	}
}