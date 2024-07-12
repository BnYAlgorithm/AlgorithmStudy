#include <iostream>

using namespace std;

int main()
{
	int x1, y1;
	
	cin >> x1 >> y1;

	int x2, y2;

	cin >> x2 >> y2;

	int x3, y3;

	cin >> x3 >> y3;

	int res_x, res_y;

	if (x1 == x2)
		res_x = x3;
	else if (x1 == x3)
		res_x = x2;
	else
		res_x = x1;

	if (y1 == y2)
		res_y = y3;
	else if (y1 == y3)
		res_y = y2;
	else
		res_y = y1;

	cout << res_x << " " << res_y;
}