#include <iostream>

using namespace std;

int main(void) {
	int N, room = 1, cnt = 1;
	cin >> N;

	while (room < N) {
		room += 6 * cnt;
		cnt += 1;
	}

	cout << cnt;
}
