#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(string a, string b) {
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}

int main(void) {
	int N;
	cin >> N;
	
	set<string> words;

	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;
		words.insert(word);
	}

	vector<string> sortedWords(words.begin(), words.end());

	sort(sortedWords.begin(), sortedWords.end(), Compare);

	for (int i = 0; i < sortedWords.size(); i++) cout << sortedWords[i] << "\n";
}
