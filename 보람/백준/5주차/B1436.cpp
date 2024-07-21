#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int N, num = 666, cnt = 0;
	cin >> N;

	while (true) {
		if (to_string(num).find("666") != string::npos) cnt += 1;

		if (cnt == N) {
			cout << num;
			break;
		}

		num += 1;
	}
}
