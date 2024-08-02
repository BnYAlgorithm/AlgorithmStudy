#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	unordered_map<string, int> nameToIndex;
	vector<string> indexToName(N + 1);

	for (int i = 1; i <= N; i++) {
		string name;
		cin >> name;
		nameToIndex[name] = i;
		indexToName[i] = name;
	}

	for (int i = 0; i < M; i++) {
		string question;
		cin >> question;

		if (isdigit(question[0])) {
			int index = stoi(question);
			cout << indexToName[index] << "\n";
		}
		else cout << nameToIndex[question] << "\n";
	}

	return 0;
}
