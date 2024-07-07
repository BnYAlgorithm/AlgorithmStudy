#include <iostream>

using namespace std;

int main()
{
	string N;
	int B;

	cin >> N >> B;

	int result = 0;
	for (int i = 0; i < N.length(); i++)
	{
		if (N[i] >= 'A' && N[i] <= 'Z')
			result = result * B + (N[i] - 'A' + 10);
		else
			result = result * B + (N[i] - '0');
	}
	cout << result;
}