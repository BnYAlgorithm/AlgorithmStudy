#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	arr.resize(42, 0);

	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;

		arr[num % 42]++;
	}

	int result = 0;
	for (int num : arr)
	{
		if (num > 0)
			result++;
	}
	cout << result;
}