#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	string S;
	cin >> S;

	int result = 0;
	for (int i = 0; i < N; i++)
		result += (int)S[i] - '0';

	cout << result;
}