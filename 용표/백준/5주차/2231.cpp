#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;

	cin >> N;

	
	int num = 0;
	for (; num < N; num++)
	{
		string tmp = to_string(num);
		int sum = num;
		for (int i = 0; i < tmp.length(); i++)
			sum += tmp[i] - '0';

		if (sum == N) break;
	}
	if (num == N)
		cout << 0;
	else
		cout << num;
}	