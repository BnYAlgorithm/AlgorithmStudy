#include <iostream>

using namespace std;

int main(void) {
	int N, v, arr[101], cnt = 0;
	cin >> N;

	for (int i = 0; i < N; i++) cin >> arr[i];

	cin >> v;

	for (int i = 0; i < N; i++) {
		if (arr[i] == v) cnt += 1;
	}

	cout << cnt;
}
