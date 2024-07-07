#include <iostream>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int cur = 1, res = 0;
	while (cur <= N)
	{
		if (N % cur == 0)
		{
			res = cur;
			K--;
		}
		if (K == 0) break;
		cur++;
	}
	if (K > 0)
		cout << 0;
	else
		cout << cur;
}