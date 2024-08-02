#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A_size, B_size, element;
	cin >> A_size >> B_size;

	unordered_set<int> A;
	unordered_set<int> B;

	for (int i = 0; i < A_size; i++) {
		cin >> element;
		A.insert(element);
	}

	for (int i = 0; i < B_size; i++) {
		cin >> element;
		B.insert(element);
	}

	int cnt = 0;
	
	for (const int& x : A) {
		if (B.find(x) == B.end()) cnt += 1;
	}

	for (const int& x : B) {
		if (A.find(x) == A.end()) cnt += 1;
	}

	cout << cnt;

	return 0;
}
