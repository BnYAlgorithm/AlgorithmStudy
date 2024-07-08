#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int	N;
	cin >> N;

	int dot = pow(2, N) + 1;
	int res_dot = dot * dot;

	cout << res_dot;
}
