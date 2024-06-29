#include <iostream>

using namespace std;

int main(void) {
	string num1, num2, swap_num1, swap_num2;
	cin >> num1 >> num2;

	for (int i = 2; i >= 0; i--) {
		swap_num1 += num1[i];
		swap_num2 += num2[i];
	}

	if (swap_num1 > swap_num2) cout << swap_num1;
	else cout << swap_num2;
}
