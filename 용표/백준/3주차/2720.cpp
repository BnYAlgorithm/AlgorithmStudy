#include <iostream>

using namespace std;

int main()
{
	int arr[4] = { 25, 10, 5, 1 };

	int T, C;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> C;
		for (int j = 0; j < 4; j++)
		{
			cout << C / arr[j] << " ";
			C %= arr[j];
		}
		cout << "\n";
	}
}