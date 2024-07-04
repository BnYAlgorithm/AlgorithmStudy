#include <iostream>

using namespace std;

int main(void) {
	int N, num, cnt = 0, res = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;

		for (int j = 1; j <= num; j++) {
			if (num % j == 0) cnt += 1;
		}

		if (cnt == 2) res += 1;

		cnt = 0;
	}

	cout << res;
}
