#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int tmp;

	if (a == b && b == c)
		tmp = 10000 + a * 1000;
	else if (a == b)
		tmp = 1000 + a * 100;
	else if (b == c)
		tmp = 1000 + b * 100;
	else if (a == c)
		tmp = 1000 + c * 100;
	else
	{
		if (a > b && a > c)
			tmp = a * 100;
		else if (b > a && b > c)
			tmp = b * 100;
		else
			tmp = c * 100;
	} 

	cout << tmp;
}