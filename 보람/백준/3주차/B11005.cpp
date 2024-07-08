#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int N, B;
	cin >> N >> B;

	string res = "";
	string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (N > 0) {
		res += chars[N % B];
		N /= B;
	}

	reverse(res.begin(), res.end());
	cout << res;
}
