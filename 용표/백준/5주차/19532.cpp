#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	int x = -999, y = -999;
	bool isFind = false;
	for (; x <= 999; x++)
	{
		for (; y <= 999; y++)
		{
			if (a * x + b * y == c && d * x + e * y == f)
			{
				isFind = true;
				break;
			}
		}
		if (isFind) break;
		y = -999;
	}

	if (isFind)
		cout << x << " " << y;
}