#include <iostream>

using namespace std;

int main(void) {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	// ���� ���� 3���� ���� ����� ���
	if (num1 == num2 && num2 == num3) cout << 10000 + num1 * 1000;

	// ���� ���� 2���� ���� ����� ���
	else if (num1 == num2 || num1 == num3 || num2 == num3) {
		// num1�� num2�� ���� ���
		if (num1 == num2) cout << 1000 + num1 * 100;
		// num1�� num3�� ���� ���
		else if (num1 == num3) cout << 1000 + num1 * 100;
		// num2�� num3�� ���� ���
		else cout << 1000 + num2 * 100;
	}

	// ��� �ٸ� ���� ���� ����� ���
	else {
		// ���� ū ���� num1�� ���
		if (num1 > num2 && num1 > num3) cout << num1 * 100;
		// ���� ū ���� num2�� ���
		else if (num1<num2 && num2>num3) cout << num2 * 100;
		// ���� ū ���� num3�� ���
		else cout << num3 * 100;
	}
}
