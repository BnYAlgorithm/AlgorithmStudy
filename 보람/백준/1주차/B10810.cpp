#include <iostream>

using namespace std;

int main(void) {
	// ���� ���� �ٱ��ϵ� ���� ����ؾ��ϹǷ� 0���� �ʱ�ȭ
	int N, M, basket[101] = { 0, };
	cin >> N >> M;

	for (int w = 0; w < M; w++) {
		int i, j, k;
		cin >> i >> j >> k;

		for (int z = i; z <= j; z++) basket[z] = k;
	}

	// �ٱ��� ��ȣ 1���� ����
	for (int i = 1; i < N + 1; i++) cout << basket[i] << " ";
}
