#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int N, M, res = 0;
	cin >> N >> M;

	vector<int> cards(N);

	for (int i = 0; i < N; i++) cin >> cards[i];

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = cards[i] + cards[j] + cards[k];

				if (sum > res && sum <= M) res = sum;
			}
		}
	}

	cout << res;
}
