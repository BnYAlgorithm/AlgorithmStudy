#include <iostream>

using namespace std;

int main(void) {
	// 공이 없는 바구니도 값을 출력해야하므로 0으로 초기화
	int N, M, basket[101] = { 0, };
	cin >> N >> M;

	for (int w = 0; w < M; w++) {
		int i, j, k;
		cin >> i >> j >> k;

		for (int z = i; z <= j; z++) basket[z] = k;
	}

	// 바구니 번호 1부터 시작
	for (int i = 1; i < N + 1; i++) cout << basket[i] << " ";
}
