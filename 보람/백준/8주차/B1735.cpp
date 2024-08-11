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
	int A1, B1, A2, B2;
	cin >> A1 >> B1;
	cin >> A2 >> B2;

	int numerator = A1 * B2 + A2 * B1;
	int denominator = B1 * B2;

	int g = gcd(numerator, denominator);
	numerator /= g;
	denominator /= g;

	cout << numerator << " " << denominator;
	
	return 0;
}
