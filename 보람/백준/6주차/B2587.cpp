#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int sum = 0;
	vector<int> num(5);

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}

	sort(num.begin(), num.end());

	int avg = sum / 5;
	int median = num[2];

	cout << avg << "\n" << median;
}
