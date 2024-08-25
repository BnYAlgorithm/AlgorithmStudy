#include <iostream>

using namespace std;

int main()
{
	long long A, B;
	cin >> A >> B;

	long long bigger = (A > B) ? A : B;
	long long res;
	for (int i = 1;; i++)
	{
		res = bigger * i;
		if (res % A == 0 && res % B == 0)
			break;
	}

	cout << res;
}