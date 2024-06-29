#include <iostream>

using namespace std;

int main(void) {
	int N, res = 0;
	string num;
	cin >> N >> num;

	for (int i = 0; i < N; i++) res += num[i] - 48;

	cout << res;
}
