#include <iostream>

using namespace std;

int main()
{
	int max = 0;
	int tmp, index;

	for (int i = 1; i <= 9; i++)
	{
		cin >> tmp;
		if (tmp > max)
		{
			max = tmp;
			index = i;
		}
	}

	cout << max << "\n" << index;
}