#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int min_x, min_y, min;

	if (x < w - x)
		min_x = x;
	else
		min_x = w - x;

	if (y < h - y)
		min_y = y;
	else
		min_y = h - y;

	if (min_x < min_y)
		min = min_x;
	else
		min = min_y;

	cout << min;
}