#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int res = 3000;
	bool isFind = false;
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1700; j++)
		{
			if (i * 5 + j * 3 == N)
			{
				isFind = true;
				if (res > i + j)
					res = i + j;
			}
		}
	}

	if (isFind)
		cout << res;
	else
		cout << -1;
}