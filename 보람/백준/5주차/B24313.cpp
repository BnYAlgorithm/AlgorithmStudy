#include <iostream>

using namespace std;

int main(void) {
	int a_1, a_0, c, n_0;
	cin >> a_1 >> a_0 >> c >> n_0;

	bool condition1 = (a_1 <= c);
	bool condition2 = (a_1 * n_0 + a_0 <= c * n_0);

	if (condition1 && condition2) cout << 1;
	else cout << 0;
}
