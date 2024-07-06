#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int N, K;
	cin >> N >> K;

	vector<int> v;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) v.push_back(i);
	}

	if (K <= v.size()) cout << v[K - 1];
	else cout << 0;
}
