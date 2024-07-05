#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int tmp = 2;
	int count = 1;
	for (; tmp <= N; count++)
		tmp += 6 * count;
	cout << count;
}