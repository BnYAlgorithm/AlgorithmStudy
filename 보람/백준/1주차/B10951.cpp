#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B;
	// A�� B�� ���� ������ ������ �ݺ� (eof�� �ƴ� ������ �ݺ�)
	while (!(cin >> A >> B).eof()) cout << A + B << "\n";
}
