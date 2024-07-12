#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int min_x = 10001;
	int max_x = -10001;
	int min_y = 10001;
	int max_y = -10001;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;

		if (x < min_x)
			min_x = x;
		if (x > max_x)
			max_x = x;

		if (y < min_y)
			min_y = y;
		if (y > max_y)
			max_y = y;
	}

	cout << (max_x - min_x) * (max_y - min_y);
}