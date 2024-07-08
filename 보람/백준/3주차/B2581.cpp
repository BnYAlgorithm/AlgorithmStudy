#include <iostream>

using namespace std;

int main(void) {
	int M, N, cnt = 0, sum = 0, min = 10000;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) cnt += 1;
		}

		if (cnt == 2) {
			if (min > i) min = i;
			sum += i;
		}

		cnt = 0;
	}

	if (sum == 0) cout << -1;
	else cout << sum << "\n" << min;
}
