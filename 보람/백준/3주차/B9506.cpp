#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	while (true) {
		int n, sum = 0;
		vector<int> v;

		cin >> n;

		if (n == -1) break;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				v.push_back(i);
				sum += i;
			}
		}

		if (sum == n) {
			cout << n << " = ";

			for (int i = 0; i < v.size(); i++) {
				if (i != 0) cout << " + ";
				cout << v[i];
			}

			cout << "\n";
		}
		else cout << n << " is NOT perfect." << "\n";
	}
}
