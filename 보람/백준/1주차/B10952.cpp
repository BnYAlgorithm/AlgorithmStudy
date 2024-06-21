#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B;
	while (true) {
		cin >> A >> B;

		if (A == 0 && B == 0) break;
		else cout << A + B << "\n";
	}
}
