#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B;
	// A와 B의 값이 존재할 때까지 반복 (eof가 아닐 때까지 반복)
	while (!(cin >> A >> B).eof()) cout << A + B << "\n";
}
