#include <iostream>

using namespace std;

int main(void) {
	int A, B, C; // ���� �ð�: A�� B��, �丮 �ð�: C��
	cin >> A >> B >> C;

	A += C / 60;
	B += C % 60;

	if (B >= 60) {
		B -= 60;
		A += 1;
	}

	if (A >= 24) A -= 24; // �ô� 0���� 23������ ����

	cout << A << " " << B;
}
