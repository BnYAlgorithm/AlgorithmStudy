#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	cout << n * (n - 1) * (n - 2) / 6 << "\n" << 3;
	// 등비 수열로 인한 시그마 공식 활용
	// 시그마 식 결과 : n * (n - 1) * (n - 2) / 6
	// 최고 차항의 차수 : 3
}