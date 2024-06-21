#include <iostream>

using namespace std;

int main()
{
	int H, M;

	cin >> H >> M;

	int tmp = H * 60 + M;

	tmp -= 45;

	if (tmp < 0)
		tmp += 24 * 60;

	H = tmp / 60;
	M = tmp % 60;

	cout << H << " " << M;
}