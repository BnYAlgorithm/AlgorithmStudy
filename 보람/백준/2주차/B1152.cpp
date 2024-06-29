#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	int cnt = 1;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') cnt += 1;
	}

	if (s[0] == ' ') cnt -= 1;
	if (s[s.length() - 1] == ' ') cnt -= 1;

	cout << cnt;
}
