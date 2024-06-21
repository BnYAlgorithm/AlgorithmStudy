#include <iostream>

using namespace std;

int main(void) {
	int test_score;

	cin >> test_score;

	if (test_score >= 90) cout << "A";
	else if (test_score >= 80 && test_score <= 89) cout << "B";
	else if (test_score >= 70 && test_score <= 79) cout << "C";
	else if (test_score >= 60 && test_score <= 69) cout << "D";
	else cout << "F";
}
