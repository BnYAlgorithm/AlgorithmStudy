#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;

	int arr[3] = { a, b, c };
	sort(arr, arr + 3);

	if (arr[2] >= arr[0] + arr[1]) arr[2] = arr[0] + arr[1] - 1;

	int res = arr[0] + arr[1] + arr[2];
	cout << res;
}
