#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	while (true)
	{
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == 0)
			break;

		sort(arr, arr + 3);

		int a = arr[0], b = arr[1], c = arr[2];

		if (c >= a + b)
			cout << "Invalid";
		else
		{
			if (a == b && b == c)
				cout << "Equilateral";
			else if (a != b && b != c && a != c)
				cout << "Isosceles";
			else
				cout << "Scalene";
		}
		cout << "\n";
	}
}