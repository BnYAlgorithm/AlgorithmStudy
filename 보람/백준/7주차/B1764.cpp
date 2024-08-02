#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<string> unheard(N);
	vector<string> unseen(M);

	for (int i = 0; i < N; i++) cin >> unheard[i];
	for (int i = 0; i < M; i++) cin >> unseen[i];

	sort(unheard.begin(), unheard.end());
	sort(unseen.begin(), unseen.end());

	vector<string> result;

	set_intersection(unheard.begin(), unheard.end(), unseen.begin(), unseen.end(), back_inserter(result));

	cout << result.size() << "\n";
	for (const string& name : result) cout << name << "\n";

	return 0;
}
