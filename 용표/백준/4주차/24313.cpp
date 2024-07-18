#include <iostream>

using namespace std;

int main()
{
	int a1, a0;
	int c;
	int n0;

	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	if (a1 * n0 + a0 <= c * n0 && a1 <= c) // a0이 음수일 때, a1이 c보다 작거나 같아야 식이 성립하므로. 또한 a1이 c보다 크면 식 성립이 되지 않기 때문에
		cout << 1;
	else
		cout << 0;
}