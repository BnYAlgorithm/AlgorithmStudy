#include <iostream>

using namespace std;

int main(void) {
	string word;
	cin >> word;
	
	for (int i = 0; i < word.length() / 2; i++) {
		if (word[i] != word[word.length() - 1 - i]) {
			cout << 0;
			return 0;
		}
	}

	cout << 1;
}
