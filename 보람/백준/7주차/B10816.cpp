#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, num;
	cin >> N;

	unordered_map<int, int> cardsCount;

	for (int i = 0; i < N; i++) {
		cin >> num;
		cardsCount[num]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		cout << cardsCount[num] << " ";
	}

	return 0;
}
