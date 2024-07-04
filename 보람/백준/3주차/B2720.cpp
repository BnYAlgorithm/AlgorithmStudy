#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, C;
	cin >> T;

	while (T--) {
		cin >> C;

		int quarter = C / 25;
		C %= 25;

		int dime = C / 10;
		C %= 10;

		int nickel = C / 5;
		C %= 5;

		int penny = C;

		cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";

	}
}
