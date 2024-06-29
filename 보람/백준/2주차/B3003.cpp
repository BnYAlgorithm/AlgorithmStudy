#include <iostream>

using namespace std;

int main(void) {
	int b_piece[6] = { 1, 1, 2, 2, 2, 8 };
	int w_piece[6] = { 0, };

	for (int i = 0; i < 6; i++) {
		cin >> w_piece[i];
		cout << b_piece[i] - w_piece[i] << " ";
	}
}
