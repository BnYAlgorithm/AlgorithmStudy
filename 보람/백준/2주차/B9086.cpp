#include <iostream>

using namespace std;

int main(void) {
	int T;
	string S;
	cin >> T;

	while (T--) {
		cin >> S;
		cout << S[0] << S[S.length() - 1] << "\n";
	}
}
