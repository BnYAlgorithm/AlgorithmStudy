#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N;

	vector<int> cards(N);
	for (int i = 0; i < N; i++) cin >> cards[i];

	sort(cards.begin(), cards.end());

	cin >> M;

	vector<int> nums(M);
	for (int i = 0; i < M; i++) cin >> nums[i];

	for (int i = 0; i < M; i++) {
		if (binary_search(cards.begin(), cards.end(), nums[i])) cout << 1 << " ";
		else cout << 0 << " ";
	}
}
