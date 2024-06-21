#include <iostream>

using namespace std;

int main(void) {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	// 같은 눈이 3개가 나온 경우의 상금
	if (num1 == num2 && num2 == num3) cout << 10000 + num1 * 1000;

	// 같은 눈이 2개가 나온 경우의 상금
	else if (num1 == num2 || num1 == num3 || num2 == num3) {
		// num1과 num2가 같은 경우
		if (num1 == num2) cout << 1000 + num1 * 100;
		// num1과 num3이 같은 경우
		else if (num1 == num3) cout << 1000 + num1 * 100;
		// num2와 num3이 같은 경우
		else cout << 1000 + num2 * 100;
	}

	// 모두 다른 눈이 나온 경우의 상금
	else {
		// 가장 큰 눈이 num1일 경우
		if (num1 > num2 && num1 > num3) cout << num1 * 100;
		// 가장 큰 눈이 num2일 경우
		else if (num1<num2 && num2>num3) cout << num2 * 100;
		// 가장 큰 눈이 num3일 경우
		else cout << num3 * 100;
	}
}
