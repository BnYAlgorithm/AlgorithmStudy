#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b) {
	while (b != 0) {
		long long int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main() {
	long long int A, B;
	cin >> A >> B;

	long long int lcm = A * (B / gcd(A, B));
	cout << lcm;

	return 0;
}
