#include <iostream>

using namespace std;

int main(void) {
	int N, M, basket[101];
	cin >> N >> M;

	// �ٱ��Ͽ� �����ִ� ��ȣ�� ���� ��ȣ�� ���� ��
	for (int i = 1; i < N + 1; i++) basket[i] = i;

	for (int k = 0; k < M; k++) {
		// temp�� ���� ��ȯ�� �� ���� ��� ������ ������ ����
		int i, j, temp;
		cin >> i >> j;

		temp = basket[i];
		basket[i] = basket[j];
		basket[j] = temp;
	}

	for (int i = 1; i < N + 1; i++) cout << basket[i] << " ";
}
