#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	string S;
	cin >> S;

	set<string> substrings;

	for (int i = 0; i < S.size(); i++) {
		for (int j = 1; j <= S.size() - i; j++) substrings.insert(S.substr(i, j));
	}

	cout << substrings.size() << "\n";

	return 0;
}
