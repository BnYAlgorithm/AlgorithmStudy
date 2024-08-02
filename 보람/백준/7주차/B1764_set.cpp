#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	string name;

	unordered_set<string> unheard;
	vector<string> result;

	for (int i = 0; i < N; i++) {
		cin >> name;
		unheard.insert(name);
	}

	for (int i = 0; i < M; i++) {
		cin >> name;

		if (unheard.find(name) != unheard.end()) result.push_back(name);
	}

	sort(result.begin(), result.end());

	cout << result.size() << "\n";
	for (const string& name : result) cout << name << "\n";

	return 0;
}
