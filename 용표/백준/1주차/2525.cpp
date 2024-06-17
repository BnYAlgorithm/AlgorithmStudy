#include <iostream>

using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B;
	cin >> C;

	int tmp = A * 60 + B;

	tmp += C;

	if (tmp >= 24 * 60)
		tmp -= 24 * 60;

	A = tmp / 60;
	B = tmp % 60;

	cout << A << " " << B;
}