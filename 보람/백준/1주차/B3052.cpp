#include <iostream>

using namespace std;

int main(void) {
	int arr[10], res = 0;

	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		arr[i] = num % 42;
	}

	for (int i = 0; i < 10; i++) {
		// �迭 ���� ���� ���� ��� ī��Ʈ���� ����
		int cnt = 0;

		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) cnt += 1;
		}

		if (cnt == 0) res += 1;
	}

	cout << res;
}
