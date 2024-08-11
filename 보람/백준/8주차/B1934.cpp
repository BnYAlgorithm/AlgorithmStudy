#include <iostream>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int A, B;
		cin >> A >> B;

		int lcm = A * (B / gcd(A, B));
		cout << lcm << "\n";
	}

	return 0;
}
