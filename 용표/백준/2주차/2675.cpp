#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int R;
		string S;
		
		cin >> R >> S;

		string tmp = "";
		for (int j = 0; j < S.length() * R; j++)
		{
			tmp += S[j / R];
		}

		cout << tmp << "\n";
	}
}