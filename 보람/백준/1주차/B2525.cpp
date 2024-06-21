#include <iostream>

using namespace std;

int main(void) {
	int A, B, C; // 현재 시각: A시 B분, 요리 시간: C분
	cin >> A >> B >> C;

	A += C / 60;
	B += C % 60;

	if (B >= 60) {
		B -= 60;
		A += 1;
	}

	if (A >= 24) A -= 24; // 시는 0부터 23까지의 정수

	cout << A << " " << B;
}
