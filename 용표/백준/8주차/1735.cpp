#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main()
{
	int A1, A2, B1, B2;

	cin >> A1 >> B1;
	cin >> A2 >> B2;

	int bigger = (B1 > B2) ? B1 : B2;
	int num;
	for (int i = 1;; i++)
	{
		num = bigger * i;
		if (num % B1 == 0 && num % B2 == 0)
			break;
	}

	int A3 = (num / B1) * A1 + (num / B2) * A2;
	int B3 = num;

	int tmp = gcd(A3, B3);
	cout << A3 / tmp << " " << B3 / tmp;
}