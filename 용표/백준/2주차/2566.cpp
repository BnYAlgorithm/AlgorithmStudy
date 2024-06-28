#include <iostream>

using namespace std;

int main()
{
	int row, col;
	int max = -1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int tmp;
			cin >> tmp;
			if (tmp > max)
			{
				row = i;
				col = j;
				max = tmp;
			}
		}
	}

	cout << max << "\n";
	cout << row << " " << col;
}