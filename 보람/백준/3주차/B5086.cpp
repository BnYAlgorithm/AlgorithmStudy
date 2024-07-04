#include <iostream>

using namespace std;

int main(void) {
	int num1, num2;
	cin >> num1 >> num2;

	while (num1 != 0 && num2 != 0) {
		if (num2 % num1 == 0) cout << "factor" << "\n";
		else if (num1 % num2 == 0) cout << "multiple" << "\n";
		else cout << "neither" << "\n";

		cin >> num1 >> num2;
	}
}
