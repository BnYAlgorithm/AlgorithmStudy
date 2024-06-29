#include <iostream>

using namespace std;

int main(void) {
	int N, cnt = 0;
	string s;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s;

		if (s.length() <= 2) continue;
		else {
			for (int j = 0; j < s.length(); j++) {
				if (s[j] != s[j + 1]) {
					if (s.find(s[j], j + 2) != string::npos) {
						cnt += 1;
						break;
					}
				}
			}
		}
	}

	cout << N - cnt;
}
