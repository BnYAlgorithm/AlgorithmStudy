#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int cur = 0;
	int num = 665;
	while (true)
	{
		string tmp = to_string(num);
		if (tmp.find("666") != string::npos) cur++;
		if (cur == N) break;
		num++;
	}
	cout << num;
}