#include <iostream>

using namespace std;

int main()
{
	int res[6] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; i++)
	{
		int tmp;
		cin >> tmp;
		res[i] -= tmp;
	}
	for (int num : res)
		cout << num << " ";
}