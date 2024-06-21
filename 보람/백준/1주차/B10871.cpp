#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X, A[10001];
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> A[i];

		if (A[i] < X) cout << A[i] << " ";
	}
}
