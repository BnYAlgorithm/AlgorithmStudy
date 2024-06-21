#include <iostream>

using namespace std;

int main(void) {
	int N, M, basket[101];
	cin >> N >> M;

	// 바구니에 적혀있는 번호와 같은 번호가 적힌 공
	for (int i = 1; i < N + 1; i++) basket[i] = i;

	for (int k = 0; k < M; k++) {
		// temp는 공을 교환할 때 값을 잠깐 저장할 임의의 변수
		int i, j, temp;
		cin >> i >> j;

		temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;
	}

	for (int i = 1; i < N + 1; i++) cout << basket[i] << " ";
}
