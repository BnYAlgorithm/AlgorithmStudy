#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, arr[1000001];
	cin >> N;

	for (int i = 0; i < N; i++) cin >> arr[i];

	sort(arr, arr + N);

	cout << arr[0] << " " << arr[N - 1];
}
