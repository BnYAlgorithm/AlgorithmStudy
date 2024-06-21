#include <iostream>

using namespace std;

int main(void) {
	int N, M = 0;
	double score[1001], sum = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (M < score[i]) M = score[i];
	}

	for (int i = 0; i < N; i++) {
		score[i] = score[i] / M * 100;
		sum += score[i];
	}

	cout << sum / N;
}
