#include <iostream>
#include <unordered_set>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, cnt = 0;
	cin >> N >> M;

	string str;
	unordered_set<string> strSet;

	for (int i = 0; i < N; i++) {
		cin >> str;
		strSet.insert(str);
	}

	for (int i = 0; i < M; i++) {
		cin >> str;
		if (strSet.find(str) != strSet.end()) cnt += 1;
	}

	cout << cnt;
}
