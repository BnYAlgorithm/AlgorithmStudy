#include <iostream>

using namespace std;

int main(void) {
	// ��� 0���� �ʱ�ȭ -> ���� ���� ����
	int student[31] = { 0, };

	for (int i = 0; i < 28; i++) {
		int n;
		cin >> n;
		student[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (student[i] != 1) cout << i << "\n";
	}
}
