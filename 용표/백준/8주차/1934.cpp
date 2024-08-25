#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;
		int max = (A > B) ? A : B;
		int res;
		for (int i = 1;; i++)
		{
			res = max * i;
			if (res % A == 0 && res % B == 0)
				break;
		}
		cout << res << "\n";
	}
}