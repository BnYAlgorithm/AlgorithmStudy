#include <iostream>

using namespace std;

int main(void) {
	int N, res = 0;
	cin >> N;

	while (N >= 0) {
		if (N % 5 == 0) {
			res += N / 5;
			cout << res;
			return 0;
		}
		else {
			N -= 3;
			res += 1;
		}
	}

	cout << -1;
}
