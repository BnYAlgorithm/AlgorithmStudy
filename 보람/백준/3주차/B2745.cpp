#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int B;
	string N;
	cin >> N >> B;
	cout << stoi(N, nullptr, B);
}
