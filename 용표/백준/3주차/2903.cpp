#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int result = 2;
	for (int i = 0; i < N; i++)
		result = result * 2 - 1;
	cout << result * result;
}