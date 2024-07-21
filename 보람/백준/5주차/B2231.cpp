#include <iostream>

using namespace std;

int findConstructor(int N) {
	for (int i = 0; i < N; i++) {
		int sum = i;
		int temp = i;

		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == N) return i;
	}
	return 0;
}

int main(void) {
	int N;
	cin >> N;

	int constructor = findConstructor(N);
	cout << constructor;
}
