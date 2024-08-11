#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main() {
	int N;
	cin >> N;

	vector<int> position(N);
	for (int i = 0; i < N; i++) cin >> position[i];

	vector<int> gaps(N - 1);
	for (int i = 0; i < N - 1; i++) gaps[i] = position[i + 1] - position[i];

	int gcdVal = gaps[0];
	for (int i = 1; i < gaps.size(); i++) gcdVal = gcd(gcdVal, gaps[i]);

	int totalNewTree = 0;
	for (int i = 0; i < N - 1; i++) totalNewTree += (gaps[i] / gcdVal) - 1;

	cout << totalNewTree;

	return 0;
}
