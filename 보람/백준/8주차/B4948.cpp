#include <iostream>
#include <vector>

using namespace std;

void eratosthenes(vector<bool>& isPrime, int max_num) {
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i * i <= max_num; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= max_num; j += i) isPrime[j] = false;
		}
	}
}

int main() {
	int max_input = 123456 * 2;
	vector<bool> isPrime(max_input + 1, true);
	eratosthenes(isPrime, max_input);

	int n;
	while (true) {
		cin >> n;
		if (n == 0) break;

		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (isPrime[i]) cnt++;
		}

		cout << cnt << "\n";
	}

	return 0;
}
