#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, arr[1000001];
	cin >> N;

	int min = 1000001, max = -1000001;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];

		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}

	cout << min << " " << max;
}
