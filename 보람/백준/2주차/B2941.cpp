#include <iostream>

using namespace std;

int main(void) {
	string s;
	int cnt = 0;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=') cnt += 1;
			else if (s[i + 1] == '-') cnt += 1;
		}

		else if (s[i] == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=') cnt += 1;
			else if (s[i + 1] == '-') cnt += 1;
		}

		else if (s[i] == 'l' && s[i + 1] == 'j') cnt += 1;

		else if (s[i] == 'n' && s[i + 1] == 'j') cnt += 1;

		else if (s[i] == 's' && s[i + 1] == '=') cnt += 1;

		else if (s[i] == 'z' && s[i + 1] == '=') cnt += 1;
	}

	cout << s.length() - cnt;
}
