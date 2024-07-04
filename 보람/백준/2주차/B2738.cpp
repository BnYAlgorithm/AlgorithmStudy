#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int arr1[101][101], arr2[101][101];
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cin >> arr1[i][j];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cin >> arr2[i][j];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cout << arr1[i][j] + arr2[i][j] << " ";
		cout << "\n";
	}
}
