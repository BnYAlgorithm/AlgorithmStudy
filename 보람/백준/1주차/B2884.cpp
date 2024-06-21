#include <iostream>

using namespace std;

int main(void) {
	int H, M;
	cin >> H >> M;

	M -= 45; // 45분 일찍 알람 설정

	if (M < 0) {
		H -= 1;
		M += 60;

		if (H < 0) H = 23;
	}

	cout << H << " " << M;
}
